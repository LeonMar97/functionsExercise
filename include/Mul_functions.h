#include "Complex.h"
#include<vector>
#pragma once
class Mul_functions:public Complex {
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
public:
	Mul_functions(const std::shared_ptr<Function>& func_l, const std::shared_ptr<Function>& func_r);
	double calculate(double x) const override;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
private:		
	std::string create_equation(const Function* f_l, const Function* f_r)const override;
};
