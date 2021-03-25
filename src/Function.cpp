#include <Function.h>
#include <vector>

Function::Function(std::string equation) : m_equation(equation) {}

void Function::print() const{
	std::cout << m_equation;
}

void Function::print(double value) const {
	std::cout << assign(std::to_string(value).substr(0, std::to_string(value).find('.') + 3));
	std::cout << "= " << this->calculate(value) << std::endl;
}

std::string Function::get_equation() const {
	return m_equation;
}

std::string Function::assign(std::string value) const
{
	std::string return_string{}; //return value
	auto x_pos = m_equation.find('x');
	size_t total_pos = 0;
	std::string temp{};
	int i = 0;
	while (x_pos != std::string::npos) {
		temp = m_equation.substr(total_pos , x_pos);
		return_string += temp + value;
		total_pos += x_pos + 1;
		x_pos = m_equation.substr(total_pos).find('x');
	}
	return return_string + m_equation.substr(total_pos);
}
