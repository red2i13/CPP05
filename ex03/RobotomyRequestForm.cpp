#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void)  : AForm("RobotomyRequestForm", 72, 45), _target("Anyone") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy): AForm("RobotomyRequestForm", 72, 45), _target(copy._target)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm const	&RobotomyRequestForm::operator = (RobotomyRequestForm const &other)
{
	(void)other;
	return (*this);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    check(executor.getGrade());
	srand(time(0));
	int random_number = rand() % 2;
	if (random_number == 0)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << " robotomy failed." << std::endl;
}