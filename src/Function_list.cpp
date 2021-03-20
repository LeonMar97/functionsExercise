#include"Function_list.h"
#include "macros.h"
#include "Log.h"
#include "Sin.h"
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

	while (!exit) {
		std::cout << "Please enter a command(""help"" for command list): ";
		std::cin >> request;
		auto temp = Commands[request];
		switch (temp)
		{
			case 1:
				print_help();
				break;
			case 2:
				std::cin >> func_num >> value;
				std::cout << m_list[func_num].get()->calculate(value);
				break;
			case 3:
				exit = false;
			default:
				break;
		}
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