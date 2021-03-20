#include "Sum_functions.h"

Sum_functions::Sum_functions(const std::shared_ptr<Function>&func_l, const std::shared_ptr<Function>& func_r)
	:Complex(func_l, func_r,create_equation(func_l.get(),func_r.get()))
{
}
//creates the equation for current sum function
std::string Sum_functions::create_equation(const Function* f_l, const Function* f_r)const {
	return(f_l->get_equation() + "+" + f_r->get_equation());
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
/* overide from class "funciton" calclates the sum of two complex\base functions
 </summary>
 <param name="x"> requested x value for calculation</param>
 <returns>the value of the sum</returns>
																		 */
double Sum_functions ::calculate(double x)const  {
	return  calculate_left(x) + calculate_right(x);
};

