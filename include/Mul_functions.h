class Mul_functions {
public:
	Mul_functions();//constractor
	double virtual function calculate(double)const {
		m_operand_l.get()->calcualte()* m_operand_r.get()->calcualte();
	}
};