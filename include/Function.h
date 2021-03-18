#include<string>
#include<iostream>
#include<cstdlib>
#include <string>
#pragma once

class Function {
private:
	std::string m_equation;
public:
	Function(std::string);
	double virtual calculate(double x) const = 0;
	void print() const;
	std::string get_equation() const;
};