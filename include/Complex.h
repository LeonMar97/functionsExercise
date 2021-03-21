#include "Function.h"
#include <memory>
#pragma once
class Complex : public Function {
public:
	Complex(const std::shared_ptr<Function>& left, const std::shared_ptr<Function>& right, std::string equation);
	double calculate_left(double x)const;
	double calculate_right(double x)const;
	std::string virtual create_equation(const Function *f_l, const Function* f_r)const=0;
	double virtual calculate(double x) const = 0;
private:
	const std::shared_ptr<Function> m_operandR;//right
	const std::shared_ptr<Function> m_operandL;//left
};