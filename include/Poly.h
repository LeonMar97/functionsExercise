#include<Function.h>
#include<vector>
#pragma once

class Poly:public Function {



	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~protected members~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
private:
	std::vector<int>m_coefficients;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~public function~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
public:
	Poly(std::vector<int> cur);

	 double virtual  calculate(double x)const;//val
	
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//


};