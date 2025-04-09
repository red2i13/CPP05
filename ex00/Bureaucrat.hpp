#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
	public :
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	void Set_b(std::string name, int grade);
	Bureaucrat const &operator = (Bureaucrat const &other);
	std::string getName();
	int getGrade();
	void incre_grade();
	void decre_grade();
	
	class GradeTooHighException : public std::exception{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		virtual const char* what() const throw();
	};
	private:
		std::string _name;
		int grade;
	};
	std::ostream& operator<< (std::ostream& COUT, const Bureaucrat &obj);
	
#endif