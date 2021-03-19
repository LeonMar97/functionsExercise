#include "Complex.h"

Complex::Complex(Function& left, Function& right,std::string equation) 
:
m_operandL(std::make_shared<Function>(left)), m_operandR(std::make_shared<Function>(right)),
Function(equation)
{
}




//returns the calculation of the first/right part of the complex function
double Complex::calculate_right(double x)const{
	
	return m_operandR.get()->calculate(x);
	
}

//returns the calculation of the second/left part of the complex function
double Complex::calculate_left(double x)const {
	return m_operandL.get()->calculate(x);
}

