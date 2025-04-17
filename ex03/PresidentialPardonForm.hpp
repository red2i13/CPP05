#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
class PresidentialPardonForm : public AForm
{
	private:
		const std::string _target;
	public :
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		~PresidentialPardonForm(void);
		PresidentialPardonForm const &operator = (PresidentialPardonForm const &other);
		void execute(Bureaucrat const & executor) const;

};

#endif