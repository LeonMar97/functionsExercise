#include "Compose_functions.h"
#include <vector>


Compose_functions::Compose_functions(const std::shared_ptr<Function>&func_l, const std::shared_ptr<Function>& func_r)
	:Complex(func_l, func_r,create_equation(func_l.get(),func_r.get())) {}
/*creates the equation for current sum function
 replacing the 'x' in the first function with the string of the second one
*/ 
 std::string Compose_functions::create_equation(const Function* f_l, const Function* f_r)const {
	 return f_l->assign(f_r->get_equation());
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
/* overide from class "funciton" calclates the sum of two complex\base functions
 </summary>
 <param name="x"> requested x value for calculation</param>
 <returns>the value of the sum</returns>
																		 */
double Compose_functions::calculate(double x)const  {
	return calculate_left(calculate_right(x));
};
