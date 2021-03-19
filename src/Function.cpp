#include <Function.h>
#include <vector>

Function::Function(std::string equation) : m_equation(equation) {}

//constructor for polynomial - gets coefficients as parameters and builds the string from it
Function::Function(std::vector<int> poly_coefficients) {
	m_equation.resize(0);
	for (int i = 0; i < poly_coefficients.size(); i++) {
		if (poly_coefficients[i] != 0) m_equation += std::to_string(poly_coefficients[i]) + "*X^" + std::to_string(i) + " + ";
	}	
	m_equation.resize(m_equation.length() - 3);
}

void Function::print() const{
	std::cout << m_equation;
}

std::string Function::get_equation() const {
	return m_equation;
}
