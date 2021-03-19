#include <Function.h>
#include <vector>

Function::Function(std::string equation) : m_equation(equation) {}

void Function::print() const{
	std::cout << m_equation;
}

std::string Function::get_equation() const {
	return m_equation;
}
