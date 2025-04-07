#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string _name;
		int grade;
	public :
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat(void);
		Bureaucrat const &operator = (Bureaucrat const &other);
		std::string getName();
		int getGrade();
		void incre_grade();
		void decre_grade();
};

#endif