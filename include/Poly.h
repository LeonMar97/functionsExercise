#include<Function.h>
#include<vector>
#pragma once

class Poly:public Function {
private:
	std::vector<int>m_coefficients;
public:
	Poly(std::vector<int> cur);
	 double virtual calculate(double x) const;//val


};