#include<vector>
#include<memory>
#include<iostream>
#include<Function.h>
class Function_list {
	//~~~~~~~~~~~~~~~~~~~~~~~~~~public functions~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
public:
	Function_list();
	void run();

	//~~~~~~~~~~~~~~~~~~~~~~~~~~private members~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
private:
	void print_help();
	std::vector<std::shared_ptr<Function>>m_list;//function list
	//~~~~~~~~~~~~~~~~~~~~~~~~~~private functions~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
private:

};