#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <stdlib.h>
#include <time.h>
class RobotomyRequestForm : public AForm
{
	private:
		const std::string _target;
	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		~RobotomyRequestForm(void);
		RobotomyRequestForm const &operator = (RobotomyRequestForm const &other);
		void execute(Bureaucrat const & executor) const;

};

#endif