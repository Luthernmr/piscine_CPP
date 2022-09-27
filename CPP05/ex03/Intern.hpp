
#pragma once

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;
class Bureaucrat;
class Intern
{
	public:
	    Intern();
	    ~Intern();
	    Intern(const Intern &obj);
		Form *makeForm(std::string form, std::string target);

		Form *rrf(std::string target);
		Form *scf(std::string target);
		Form *ppf(std::string target);

	    Intern & operator=(const Intern &obj);
};