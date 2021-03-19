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
	//Function() { m_equation = "default"; };
	Function(std::string);
	double virtual calculate(double x) const = 0;
	void print() const;
	std::string get_equation() const;
	
	
};