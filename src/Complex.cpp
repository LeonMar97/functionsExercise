#include "Complex.h"

double Complex::calculate_left(double x)const{
	return m_operandL.get()->calculate(x);
}


double Complex::calculate_right(double x)const{
	
	return m_operandR.get()->calculate(x);
	
}
