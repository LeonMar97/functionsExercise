#include "Function.h"
#include <memory>
class Complex : public Function {
public:
	Complex(const std::shared_ptr<Function>& left, const std::shared_ptr<Function>& right, std::string equation)
		: m_operandL(left), m_operandR(right), Function(equation) {
		std::cout << m_operandL.use_count() << " " << m_operandR.use_count() << std::endl;
	}
	double calculate_left(double x)const;
	double calculate_right(double x)const;
	std::string virtual create_equation(const Function *f_l, const Function* f_r )const=0;
	double virtual calculate(double x) const = 0;
private:
	const std::shared_ptr<Function> m_operandR;//right
	const std::shared_ptr<Function> m_operandL;//left

};