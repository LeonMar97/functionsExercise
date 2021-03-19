#include "Function.h"
class Complex:public Function {
public:
	Complex(Function&, Function&,std::string equation);
	double calculate_left(double x)const;
	double calculate_right(double x)const;
	void virtual   creat_equation(Function_L)=0;
	
private:
	std::shared_ptr<Function> m_operandR;//right
	std::shared_ptr<Function> m_operandL;//left

};