#include <cmath>
#include <Poly.h>
#include <Sin.h>
#include <Log.h>
#include <macros.h>
#include <iomanip>
#include <Sum_functions.h>
#include <Mul_functions.h>
#include <Compose_functions.h>
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

	std::shared_ptr<Function> l = std::make_shared<Log>();
	std::shared_ptr<Function> r = std::make_shared<Sin>();
	std::vector c{ 1, 2, 3, 4, 5 };
	std::shared_ptr<Function> p = std::make_shared<Poly>(c);

	std::shared_ptr<Function> sum_of_sin_ln = std::make_shared<Sum_functions>(l,r);
	Sum_functions b(sum_of_sin_ln, l);

	std::shared_ptr<Function> sum = std::make_shared<Sum_functions>(p, r);
	std::shared_ptr<Function> mul = std::make_shared<Mul_functions>(p, r);
	std::shared_ptr<Function> comp= std::make_shared<Compose_functions>(p, r);
	std::cout << comp.get()->get_equation() << ' ' << comp.get()->calculate(2) << std::endl;

	
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
