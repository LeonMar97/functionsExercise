#include <cmath>
#include <Poly.h>


int main() {
	int x = 8;

	std::vector<int>co = { 4,5,6 };
	Poly z(co);
	
	std::cout << z.calculate(1);
	
	return true;
}
