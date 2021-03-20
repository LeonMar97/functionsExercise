#include <Complex.h>
Complex::Complex(const std::shared_ptr<Function>& left, const std::shared_ptr<Function>& right, std::string equation)
	: m_operandL(left), m_operandR(right), Function(equation) {
}
double Complex::calculate_right(double x)const{
	return m_operandR.get()->calculate(x);
	
}

//returns the calculation of the second/left part of the complex function
double Complex::calculate_left(double x)const {
	return m_operandL.get()->calculate(x);
}
