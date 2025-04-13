#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>

#include "Form.hpp"

class Bureaucrat{
	private:
		std::string _name;
		int grade;
	public :
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	void Set_b(std::string name, int grade);
	Bureaucrat const &operator = (Bureaucrat const &other);
	std::string getName() const;
	int getGrade() const;
	void incre_grade();
	void decre_grade();
	void signForm(Form &obj);
	class GradeTooHighException : public std::exception{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		virtual const char* what() const throw();
	};
};
	std::ostream& operator<< (std::ostream& COUT, const Bureaucrat &obj);
	
#endif