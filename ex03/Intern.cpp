#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern::~Intern(void) {}

Intern const	&Intern::operator = (Intern const &other)
{
	return (*this);
}

void Intern::makeForm(std::string name, std::string target){
	AForm *form = NULL;

	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	std::cout << form.si

}
