#include<vector>
#include<string.h>
#include<map>

enum Commands_t{
	help_t = 1, eval_t, exit_t
};

std::map<const std::string, enum Commands_t> Commands{
	{"help", help_t},
	{"eval", eval_t},
	{"exit", exit_t}
};

