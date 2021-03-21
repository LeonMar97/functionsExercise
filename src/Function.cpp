#include <Function.h>
#include <vector>

Function::Function(std::string equation) : m_equation(equation) {}

void Function::print() const{
	std::cout << m_equation;
}

void Function::print(double value) const {
	for (int i = 0; i < m_equation.size(); i++) {
		(m_equation[i] != 'x') ? (std::cout << m_equation[i]) : (std::cout << value);
	}
	std::cout << "= " << this->calculate(value) << std::endl;
}

std::string Function::get_equation() const {
	return m_equation;
}

std::string Function::assign(std::string value) const
{
	auto assigned_equation = m_equation;
	for (int i = m_equation.size() - 1; i >= 0; i--) {
		if(m_equation[i] == 'x') assigned_equation.replace(i, 4, value);
	}
	return assigned_equation;
}
