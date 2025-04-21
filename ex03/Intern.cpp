#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern::~Intern(void) {}

Intern const	&Intern::operator = (Intern const &other)
{
	(void)other;
	return (*this);
}

AForm* Intern::makeForm(std::string name, std::string target){
	AForm *form = NULL;

	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int i = 0;

	for(i = 0; i < 3 && forms[i] != name; i++){}
	switch (i)
	{
		case 0:
			form = new RobotomyRequestForm(target);
			break;
		case 1:
			form = new PresidentialPardonForm(target);
			break;	
		case 2:
			form = new ShrubberyCreationForm(target);
			break;		
		case 3:
			std::cout << "Error Form name not found in the list" << std::endl;
			return(form);
			break;
	}
	std::cout << "Intern creates " << forms[i] << std::endl;
	return(form);
}
