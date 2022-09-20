
#pragma once

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
	    ~RobotomyRequestForm();
	    RobotomyRequestForm(const RobotomyRequestForm &obj);
	
	    RobotomyRequestForm & operator=(const RobotomyRequestForm &obj);
		
	private:

};