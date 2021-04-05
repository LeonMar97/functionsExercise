#include<Function.h>
#include<vector>
#pragma once

class Poly:public Function {
private:
	std::vector<int>m_coefficients;
public:
	
	std::string create_string(std::vector<int>& poly_coefficients);
	Poly(std::vector<int>& cur);
	 double virtual calculate(double x) const;//val
};