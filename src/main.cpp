#include <cmath>
#include <Poly.h>
#include <macros.h>

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
	int x = 8;
	double inp;
	while ((std::cin >> inp)) {
		if (std::to_string(inp) != "\n")
			std::cout << inp << std::endl;
		else
			break;
	}
	std::vector<int>co = { 4,5,6 };
	Poly z(co);
	
	std::cout << z.calculate(1);
	
	return true;
}
