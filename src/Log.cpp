#include <Log.h>
#include <cmath>
#include <string>

//default constructor for log
Log::Log() : Function("ln(x)"), m_lnBase(1) {}

//equation is log_N(x)
Log::Log(double num) : Function(set_logString(num)), m_lnBase(std::log(num)) {}

//gets an equation for base of log and changed to string , after a talk with michal 
//she said that we should alwayes round 2 numbers after the dot ..
std::string Log::set_logString(double num) {
	auto temp = std::to_string(num);
	return "log_" + temp.substr(0, temp.find('.') + 3) + "(x)";
}
//return log of x in the given base
double Log::calculate(double x) const{
	return std::log(x)/m_lnBase;
}
