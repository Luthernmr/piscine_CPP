#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45)
{
    std::cout << "Constructor RobotomyRequestForm called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form("RobotomyRequest", 72, 45)
{
    std::cout << "Copy Constructor RobotomyRequestForm called" << std::endl;
    *this = obj;
};

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Deconstructor RobotomyRequestForm called" << std::endl;
};