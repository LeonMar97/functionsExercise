#include <Function.h>

Function::Function(std::string equation) {
	m_equation = equation;
}

Function::print() const{
	std::cout << m_equation;
}

Function::getName() const {
	return m_equation;
}
