#include"Function_list.h"
#include "macros.h"
#include "Log.h"
#include "Sin.h"
#include "Poly.h"
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
	unsigned int func_num;
	double value;
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
			case help_t:
				print_help();
				break;
			case eval_t:
				std::cin >> func_num >> value;
				m_list[func_num].get()->print(value);
				break;
			case exit_t:
				exit = true;
			case poly_t:
				std::cin >> deg;
				for (int i = 0; i < deg; i++) {
					std::cin >> int_value;
					coefficients.push_back(int_value);
				}
				m_list.emplace_back(Poly(coefficients));
			default:
				break;
		}
	}
}

void Function_list::print_list() {
	std::cout << "this is the function list: " << std::endl;

	for (int i = 0; i < m_list.size(); i++) {
		std::cout << i << ": ";
		m_list[i].get()->print();
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