#include<Function.h>
#include<vector>
#pragma once

class Poly:public Function {
private:
	std::vector<double>m_coefficients;
public:
	
	std::string create_string(std::vector<double>& poly_coefficients);
	Poly(std::vector<double>& cur);
	 double virtual calculate(double x) const;//val
};