#include "Compose_functions.h"
#include <vector>


Compose_functions::Compose_functions(const std::shared_ptr<Function>&func_l, const std::shared_ptr<Function>& func_r)
	:Complex(func_l, func_r,create_equation(func_l.get(),func_r.get()))
{
}
/*creates the equation for current sum function
 replacing the 'x' in the first function with the string of the second one

*/ 
 std::string Compose_functions::create_equation(const Function* f_l, const Function* f_r)const {

	std::vector<int> x_locations;
	auto left_equation = f_l->get_equation();
	auto right_equation = f_r->get_equation();
	for (int i = 0; i < f_l->get_equation().size(); i++) {
		if (left_equation[i] == 'x') x_locations.push_back(i);
	}

	int steps = 0;
 
	for (int i = 0; i < x_locations.size(); i++) {
		left_equation.replace(x_locations[i] + steps, 1, f_r->get_equation());
		steps += f_r->get_equation().size() - 1;
	}
	return left_equation;
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
