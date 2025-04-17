#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)  : AForm("PresidentialPardonForm", 25, 5), _target("Anyone") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy): AForm("PresidentialPardonForm", 25, 5), _target(copy._target)
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm const	&PresidentialPardonForm::operator = (PresidentialPardonForm const &other)
{
	(void)other;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    check(executor.getGrade());
	if(!getBool_s())
		throw FormNotSignedException();
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;

}