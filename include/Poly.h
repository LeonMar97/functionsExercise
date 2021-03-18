#include<Function.h>
#include<vector>
#pragma once

class Poly:public Function {
private:
	std::vector<int>m_coefficients;
	int m_deg;
public:
	Poly(std::vector<int> cur);
	 double virtual calculate(double x) const;//val
};