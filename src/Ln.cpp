#include <Ln.h>
#include <cmath>

//default constructor for log
Log::Log() : Function("ln(x)") {}

Log::Log(int N) : 

Log::calculate(double x) const{
	return std::log(x);
}