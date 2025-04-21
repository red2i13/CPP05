#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm {
	private:
		std::string const _name;
		bool is_Signed;
		const int Min_sign;
		const int Min_exec;
	public :
		AForm(void);
		AForm(std::string name, int s, int e);
		AForm(AForm const &copy);
		virtual ~AForm(void);
		AForm const &operator = (AForm const &other);
		bool getBool_s() const;
		std::string getName() const;
		int get_Min_sign() const;
		int get_Min_exec() const;
		void check(int grade) const;
		void beSigned(const Bureaucrat &obj);
		virtual void execute(Bureaucrat const & executor) const = 0;
		class GradeTooHighException : public std::exception{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception{
			virtual const char* what() const throw();
		};

};

//---------------operator overloading for << --------------------
std::ostream & operator<< (std::ostream &COUT, const AForm &obj);

#endif