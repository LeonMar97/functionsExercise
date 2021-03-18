#pragma once
#include <cmath>
#include <Function.h>

class Log : public Function{
public:
	Log();
	Log(int N);
	double calculate(double x) const;
private:
	int ln_base
};