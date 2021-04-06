#include<Poly.h>
#include<sstream>
#include<iomanip>


double Poly::calculate(double x) const{//val
	double sum=0;
	for (unsigned int i = 0; i < m_coefficients.size(); i++) {
		sum += m_coefficients[i] * (std::pow(x, i));
	}
	return sum;
}

//constructor using own function incase you wondering
Poly::Poly(std::vector<double>& cur) :
	Function(this->create_string(cur)),m_coefficients(cur)
{}

//creats the the equation for  function 
std::string Poly::create_string(std::vector<double>& poly_coefficients) {
	
	
	auto equation = std::ostringstream();
	equation << std::setprecision(2) << std::fixed << std::noshowpoint ;
	for (int i = poly_coefficients.size()-1; i > -1;  i--) {
		if (poly_coefficients[i] != 0) 
			equation << poly_coefficients[i]<<"*(x)^" + std::to_string(i)<< " + ";
	}
	auto equation_str = equation.str();
	if (equation_str.size()) equation_str.resize(equation_str.length() - 3); //if polynomial is not 0, theres additioal " + " at the end
	else equation_str = "0"; //if polynomial is 0 set its equation as just 0
	return(equation_str);
}