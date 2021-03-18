#include "Function.h"
class Complex:public Function {
public:
	
	double calculate_left(double x)const;
	double calculate_right(double x)const;

private:
	std::shared_ptr<Function> m_operandR;//right
	std::shared_ptr<Function> m_operandL;//left

};