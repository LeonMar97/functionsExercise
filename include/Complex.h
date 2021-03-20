#include "Function.h"
#include <memory>
class Complex:public Function {
public:
	Complex(std::shared_ptr<Function>, std::shared_ptr<Function>, std::string equation);
	double calculate_left(double x)const;
	double calculate_right(double x)const;
	std::string virtual create_equation(const Function &f_l, const Function& f_r )const=0;
	double virtual calculate(double x) const = 0;
private:
	std::shared_ptr<Function> m_operandR;//right
	std::shared_ptr<Function> m_operandL;//left

};