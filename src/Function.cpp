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

//this function is for generating a new equation of a function with a different varaible instead of x
//we are using it using the tools from the standard library: 
//it is possible to decompose the string into samples which have the character 'x' in between them.
//we generate those samples using substr function, and "squeeze" in between each sample the wanted string
//to be put instead of x. used mainly on Compose_Function to create a string of composing functions
//and printing evaluatin at a given point.

//input: the wanted variable
//output: the equation of the function with the input variable
std::string Function::assign(std::string value) const
{
	std::string return_string{}; //output string
	auto x_pos = m_equation.find('x');
	size_t total_pos = 0; //index in equation
	std::string temp{};
	int i = 0;
	while (x_pos != std::string::npos) {
		temp = m_equation.substr(total_pos, x_pos); //create sample in between 2 'x' characters, or beginning of string with 'x'
		return_string += temp + value;
		total_pos += x_pos + 1;
		x_pos = m_equation.substr(total_pos).find('x'); //find next 'x' to create next sample
	}
	return return_string + m_equation.substr(total_pos); //add the remainder until end
}
