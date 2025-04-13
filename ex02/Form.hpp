#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
// #include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
	private:
		std::string const _name;
		bool is_Signed;
		const int Min_sign;
		const int Min_exec;
	public :
		Form(void);
		Form(std::string name, int s, int e);
		Form(Form const &copy);
		~Form(void);
		Form const &operator = (Form const &other);
		bool getBool();
		std::string getName() const;
		int get_Min_sign() const;
		int get_Min_exec() const;
		void beSigned(const Bureaucrat &obj);

		class GradeTooHighException : public std::exception{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			virtual const char* what() const throw();
		};
};

//---------------operator overloading for << --------------------
std::ostream & operator<< (std::ostream &COUT, const Form &obj);

#endif