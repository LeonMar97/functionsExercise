#include<Functions.h>
class Complex_Fun::public Function {

	std::shared_ptr<Function*> m_operand_r;
	std::shared_ptr<Function*> m_operand_l;
}