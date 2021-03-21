#include <Log.h>
#include <cmath>
#include <string>

//default constructor for log
Log::Log() : Function("ln(x)"), ln_base(1) {}

//equation is log_N(x)
Log::Log(double num) : Function("log_" + std::to_string(num) + "(x)"), ln_base(std::log(num)) {}

//return log of x in the given base
double Log::calculate(double x) const{
	return std::log(x)/ln_base;
}
