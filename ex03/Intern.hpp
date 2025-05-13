#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class Intern
{
	public :
		Intern(void);
		Intern(Intern const &copy);
		~Intern(void);
		Intern const &operator = (Intern const &other);
		AForm* makeForm(std::string name, std::string target);
};

#endif