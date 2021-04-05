#include<Poly.h>
/*
Poly::Poly(std::vector<int> cur) 
	: m_coefficients(cur), Function(cur), m_deg(cur[0]) {}
	*/
double Poly::calculate(double x) const{//val
	double sum=0;
	for (unsigned int i = 0; i < m_coefficients.size(); i++) {
		sum += m_coefficients[i] * (std::pow(x, i));
	}
	return sum;
}

//constructor using own function incase you wondering
Poly::Poly(std::vector<int>& cur) :
	Function(this->create_string(cur)),m_coefficients(cur)
{}

//creats the the equation for  function 
std::string Poly::create_string(std::vector<int>& poly_coefficients) {
	auto equation = std::string();
	for (int i = poly_coefficients.size()-1; i > -1;  i--) {
		if (poly_coefficients[i] != 0) 
			equation += std::to_string(poly_coefficients[i])+"*(x)^" + std::to_string(i) + " + ";
	}
	equation.resize(equation.length() - 3);
	return(equation);
}