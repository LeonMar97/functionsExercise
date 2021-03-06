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
	void print() const;
	void print(double) const;
	std::string virtual get_equation() const;
	std::string assign(std::string)const;
};