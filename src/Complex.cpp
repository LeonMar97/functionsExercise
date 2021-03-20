#include "Complex.h"

Complex::Complex(std::shared_ptr<Function> left, std::shared_ptr<Function> right, std::string equation)
	: m_operandL(left), m_operandR(right), Function(equation) {
	std::cout << m_operandL.use_count();
}




//returns the calculation of the first/right part of the complex function
double Complex::calculate_right(double x)const{
	
	return m_operandR.get()->calculate(x);
	
}

//returns the calculation of the second/left part of the complex function
double Complex::calculate_left(double x)const {
	return m_operandL.get()->calculate(x);
}
