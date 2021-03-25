#include <iomanip>
#include <Function_list.h>
#pragma once
int main() {
	std::cout << std::setprecision(2) << std::fixed;
	auto l = Function_list();
	l.run();
	
	
	return true;
}
