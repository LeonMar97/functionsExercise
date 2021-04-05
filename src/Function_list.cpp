#include "Function_List.h"
#include "macros.h"
#include "Log.h"
#include "Sin.h"
#include "Poly.h"
#include "Sum_functions.h"
#include "Mul_functions.h"
#include "Compose_functions.h"
Function_list::Function_list() {
	//setting the firts base function requested from user..
	m_list.emplace_back(std::make_shared<Log>());
	m_list.emplace_back(std::make_shared<Sin>());
}
/// <summary>
/// real time function calculator and maker
/// </summary>
void Function_list::run(){
	auto exit = false;
	std::string request;
	int first_function, second_function;
	unsigned int func_num;
	double value,base;
	int int_value;
	int deg;
	std::vector<int> coefficients;

	while (!exit) {
		print_list();
		std::cout << "Please enter a command(""help"" for command list): ";
		std::cin >> request;
		auto temp = Commands[request];
		switch (temp)
		{
			//~~~~~~~~~~~~~~~~~case help~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			case help_t:
				print_help();
				break;
			//~~~~~~~~~~~~~~~~~case eval~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			case eval_t:
				std::cin >> first_function >> value;
				if (first_function < m_list.size() && first_function >-1)
				m_list[first_function]->print(value);
				break;
			//~~~~~~~~~~~~~~~~~case exit~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			case exit_t:
				exit = true;
				break;
			//~~~~~~~~~~~~~~~~~case poly~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			case poly_t:
				coefficients.clear();
				std::cin >> deg;
				if (deg >= 0) {
					for (int i = 0; i < deg; i++) {
						std::cin >> int_value;
						if (int_value < 0)
							break;
						coefficients.push_back(int_value);
					}
					m_list.emplace_back(std::make_shared<Poly>((coefficients)));
				}
				break;
			//~~~~~~~~~~~~~~~~~case add~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
				case add_t:
				std::cin >> first_function >> second_function;
				if (first_function < m_list.size() && second_function < m_list.size()) {
					m_list.emplace_back(std::make_shared<Sum_functions>(
						m_list[first_function], m_list[second_function]));
				}
				break;
			//~~~~~~~~~~~~~~~~~case mul~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
				case mul_t:
					std::cin >> first_function >> second_function;
					if (first_function < m_list.size() && second_function < m_list.size() 
						&&first_function > -1 && second_function > -1) {
						m_list.emplace_back(std::make_shared<Mul_functions>(
							m_list[first_function], m_list[second_function]));
					}
					break;
			//~~~~~~~~~~~~~~~~~case comp~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
				case comp_t:
					std::cin >> first_function >> second_function;
					if (first_function < m_list.size() && second_function < m_list.size()
						&&first_function >-1 && second_function >-1) {
							m_list.emplace_back(std::make_shared<Compose_functions>(
								m_list[first_function], m_list[second_function]));
					}
					break;
			//~~~~~~~~~~~~~~~~~case Log~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
				case log_t:
					std::cin >> base>>first_function;
					if (base>0 && first_function < m_list.size()&& first_function >-1) {
						m_list.emplace_back(std::make_shared<Compose_functions>
							(std::make_shared<Log>(base),m_list[first_function]));
					}
					break;
			//~~~~~~~~~~~~~~~~~case delete~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
				case del_t:
					std::cin >> value;
					if (value > -1 && value < m_list.size()) {
						m_list[value].reset();
						m_list.erase(m_list.begin() + value);
					}
				break;
			//~~~~~~~~~~~~~~~~~case default~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

			default:
				break;
		}
	}
}

void Function_list::print_list() {
	std::cout << "this is the function list: " << std::endl;

	for (int i = 0; i < m_list.size(); i++) {
		std::cout << i << ": ";
		m_list[i]->print();
		std::cout << std::endl;
	}
}

void Function_list::print_help() {
	std::cout <<
		"Following is the list of the calculator's available commands:\n"
		"eval(uate) num x - Evaluates function #num on x\n"
		"poly(nomial) N c0 c1 ... cN - 1 - Creates a polynomial with N coefficients\n"
		"mul(tiply) num1 num2 - Creates a function that is the multiplication of\n"
		"function #num1 and function #num2\n"
		"add num1 num2 - Creates a function that is the sum of function #num1 and\n"
		"function #num2\n"
		"comp(osite) num1 num2 - Creates a function that is the composition of]\n"
		"function #num1 and function #num2\n"
		"log N num - Creates a function that computes log N of function #num\n"
		"del(ete) num - Deletes function #num from function list\n"

		"help - Prints this help screen\n"
		"exit - Exits the program\n";
}