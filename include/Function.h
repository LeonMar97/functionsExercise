#include<string>
#include<iostream>
#include<cstdlib>
#pragma once

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
class Function {


	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~protected members~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
protected:
	std::string m_Equation;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~public function~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
public:
	 double virtual  calculate(double x)const =0;//val
	std::string virtual  return_Name() { return m_Equation; };//name
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

};