#include<vector>
#include<memory>
#include<iostream>
#include<Function.h>
class Function_list {
	//~~~~~~~~~~~~~~~~~~~~~~~~~~public functions~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
public:
	Function_list();
	~Function_list();
	void run();
	//~~~~~~~~~~~~~~~~~~~~~~~~~~private members~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
private:
	void print_help();
	void print_list();
	std::vector<std::shared_ptr<Function>>m_list;//function list
	void print_error(std::string error_type);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~private functions~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
private:

};