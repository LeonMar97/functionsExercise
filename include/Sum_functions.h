#include "Complex.h"
#include<vector>
#pragma once
class Sum_functions:public Complex {
public:
	Sum_functions(Function  & Function_l , Function &Function_r);

	//sum_functions(Function_l&, Function_r&);
			double calculate(double)const override {
				//return m_operandL.get()->calcualte() + m_operandR.get()->calcualte();
			};
	
};