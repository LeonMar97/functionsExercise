#include <Complex.h>
#include <memory>
#include <Function.h>

double Complex::calculate_right(double x)const{
	return m_operandR.get()->calculate(x);
	
}

//returns the calculation of the second/left part of the complex function
double Complex::calculate_left(double x)const {
	return m_operandL.get()->calculate(x);
}
