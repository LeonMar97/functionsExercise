#include<Poly.h>
Poly::Poly(std::vector<int> cur) 
	: m_coefficients(cur) {}

double  Poly::calculate(double x) const{ //val
	double sum=0;
	for (unsigned int i = 0; i < m_coefficients.size(); i++) {
		sum += m_coefficients[i] * (std::pow(x, i));
	}
	return sum;
}