#include<string>
#include<iostream>
#include<cstdlib>
#include <string>
#include <vector>
#pragma once

class Function {
private:
	std::string m_equation;
public:
	Function(std::string);
	Function(std::vector<int>);
	double virtual calculate(double x) const = 0;
	void print() const;
	std::string get_equation() const;
};