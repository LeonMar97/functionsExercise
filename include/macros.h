#include<vector>
#include<string.h>
#include<map>

enum Commands_t{
	help_t = 1, eval_t, exit_t, poly_t, add_t,mul_t,comp_t, log_t,del_t
};

std::map<const std::string, enum Commands_t> Commands{
	{"delete",del_t},
	{"help", help_t},
	{"eval", eval_t},
	{"exit", exit_t},
	{"poly", poly_t},
	{"comp", comp_t},
	{"log" , log_t },
	{"add" , add_t },
	{"mul" , mul_t }
	
};

