#pragma once
#include <cmath>
#include <Function.h>

class Sin : public Function{
public:
	Sin();
	double calculate(double x)const ;
};