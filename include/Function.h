#include<string>
#include<iostream>
#include<cstdlib>
#include <string>
#include <vector>
#include <memory>
#pragma once

class Function {
private:
	std::string m_equation;
public:
	Function(std::string equation);
	double virtual calculate(double x) const = 0;
	void print() const; //prints equation with 'x' as variable
	void print(double) const; //prints equation with real value as variable
	std::string virtual get_equation() const;
	std::string assign(std::string)const; //create equation evaluated at some point/function
};