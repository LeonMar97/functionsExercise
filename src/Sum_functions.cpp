#include "Sum_functions.h"
Sum_functions::Sum_functions(Function &Function_l, Function& Function_r)
	:Complex(Function_l, Function_r,Function_l.get_equation()
											+"+"+ Function_r.get_equation())
{

}

