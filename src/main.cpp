#include <cmath>
#include <Poly.h>
#include <Sin.h>
#include <macros.h>
#include <iomanip>

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
	/*
	int x = 8;
	double inp;
	while ((std::cin >> inp)) {
		if (std::to_string(inp) != "\n")
			std::cout << inp << std::endl;
		else
			break;
	}
	*/
	std::vector<int>co = { 4,5,6,0,3 };
	Poly z(co);
	auto sin = Sin();
	sin.print();
	std::cout << std::endl;
	z.print();
	std::cout << std::endl;
	std::cout << "value at 1: " << z.calculate(1.84);
	return true;
}
