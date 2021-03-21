#include <Sin.h>

//default constructor for sin
Sin::Sin() : Function("Sin(x)") {}

double Sin::calculate(double x) const {
	return std::sin(x);
}
