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
	std::string requrst;
	Commands request_t;

	while (!exit) {
		std::cout << "Please enter a command(""help"" for command list) : help";
		std::cin >> requrst;
		handle_requst(request);	
	}
}
bool Function_list::handle_requst() {
	unsigned int func_num;
	switch (Comnnads)
	{
	case "help":
		print_help();
		return true;
	case "eval":
		std::cin >> func_num;
	default:
		break;
	}


}

void Function_list::print_help() {
	std::cout <<
		"Following is the list of the calculator's available commands:"
		"eval(uate) num x - Evaluates function #num on x"
		"poly(nomial) N c0 c1 ... cN - 1 - Creates a polynomial with N coefficients"
		"mul(tiply) num1 num2 - Creates a function that is the multiplication of"
		"function #num1 and function #num2"
		"add num1 num2 - Creates a function that is the sum of function #num1 and"
		"function #num2"
		"comp(osite) num1 num2 - Creates a function that is the composition of"
		"function #num1 and function #num2"
		"log N num - Creates a function that computes log N of function #num"
		"del(ete) num - Deletes function #num from function list"

		"help - Prints this help screen"
		"exit - Exits the program";
}