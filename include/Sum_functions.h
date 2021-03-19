#include "Complex.h"
#include<vector>
#pragma once
class Sum_functions:public Complex {
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
public:
	Sum_functions(Function& func_l, Function& func_r);
	double  calculate(double x) const override;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
private:		
	std::string create_equation(const Function& f_l, const Function& f_r)const override;

	
};