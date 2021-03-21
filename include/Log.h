#pragma once
#include <cmath>
#include <Function.h>

class Log : public Function{
public:
	Log();
	Log(double num);
	double calculate(double x) const;
private:
	double ln_base;
};