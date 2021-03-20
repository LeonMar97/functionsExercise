#include <cmath>
#include <Poly.h>
#include <Sin.h>
#include <Log.h>
#include <macros.h>
#include <iomanip>
#include "Sum_functions.h"
#pragma once

/*
 input in( ) {
	 input a;
	 std::string inp;
	 std::cin >> a.operation;
	 while ((std::cin >> inp)) {
		 
	 }

}
*/
int main() {
	
	std::cout << std::setprecision(2) << std::fixed;

	std::shared_ptr<Log>l;
	std::shared_ptr<Sin>r;
	
	Sum_functions a(l,r );

	/*
	int x = 8;
	double inp;
	while ((std::cin >> inp)) {
		if (std::to_string(inp) != "\n")
			std::cout << inp << std::endl;
		else
			break;
	}
	
	std::vector<int>co = { 0,5,6,0,3 };
	Poly z(co);
	auto sin = Sin();
	auto log = Log();
	auto log_5 = Log(5);
	sin.print();
	std::cout << std::endl;
	z.print();

	std::cout << std::endl;
	log.print();
	std::cout << std::endl;
	log_5.print();
	std::cout << std::endl;
	std::cout << "value at 1: " << z.calculate(1.84) << std::endl;
	std::cout << "log_5 of 5 is: " << log_5.calculate(5);
	*/
	return true;
}
