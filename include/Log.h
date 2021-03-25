#pragma once
#include <cmath>
#include <Function.h>

class Log : public Function{
public:
	Log();
	Log(double num);
	double calculate(double x) const;
	std::string set_logString(double num);

private:
	double ln_base;
};