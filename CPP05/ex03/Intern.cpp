#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Constructor Intern called" << std::endl;
};

Intern::Intern(const Intern &obj)
{
    std::cout << "Copy Constructor Intern called" << std::endl;
    *this = obj;
};


Intern & Intern::operator=(const Intern &obj)
{
	(void)obj;
	return (*this);
};

Intern::~Intern()
{
    std::cout << "Deconstructor Intern called" << std::endl;
};

Form * Intern::rrf(std::string target)
{
	return(new RobotomyRequestForm(target));
}

Form * Intern::scf(std::string target)
{
	return(new ShrubberyCreationForm(target));
}

Form * Intern::ppf(std::string target)
{
	return(new PresidentialPardonForm(target));
}

Form * Intern::makeForm(std::string form, std::string target)
{
	Form * (Intern::*callFunction[3])(std::string target) = {&Intern::ppf,&Intern::rrf,&Intern::scf};

	std::string type[] = {"PresidentialPardon","RobotomyRequest","ShrubberyCreation"};

	int i = 0;
	while (i < 3)
	{
		if (form.compare(type[i]) == 0)
			break;
		i++;
	}
	if (i == 3)
		throw logic_error(form + " not exit");
	else
	{
		std::cout << CYAN <<"Interne create " << form << RESET <<std::endl;
		return((this->*callFunction[i])(target));
	}
}