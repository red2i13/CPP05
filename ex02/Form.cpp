#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Default"),  Min_sign(150), Min_exec(150){
	std::cout << "Default Constructor Form is called" << std::endl;
	is_Signed = false;
}

Form::Form(Form const &copy) : _name(copy.getName()), Min_sign(copy.get_Min_sign()), Min_exec(copy.get_Min_exec())
{
	std::cout << "Default copy constructor Form is called" << std::endl;
	is_Signed = copy.is_Signed;

}

Form::~Form(void) {
	std::cout << "Default Deconstructor Form is called" << std::endl;

}

Form const	&Form::operator = (Form const &other){
	(void)other;
	std::cout << "Default copy assingment Form is called" << std::endl;
	this->is_Signed = other.is_Signed;
	return (*this);
}
Form::Form(std::string name, int s, int e): _name(name), Min_sign(s), Min_exec(e){
	std::cout << "Constructor Form is called" << std::endl;
	if(Min_sign < 1 || Min_exec < 1)
		throw GradeTooHighException();
	else if(Min_sign > 150 || Min_exec > 150)
		throw GradeTooLowException();

}
void Form::beSigned(const Bureaucrat &obj){
	if(obj.getGrade() > get_Min_sign())
		throw GradeTooLowException();
	is_Signed = true;
}

bool Form::getBool(){
	return (is_Signed);
}
std::string Form::getName() const{
	return (_name);
}
int Form::get_Min_sign() const{
	return (Min_sign);
}
int Form::get_Min_exec() const{
	return (Min_exec);
}

std::ostream & operator<< (std::ostream &COUT, const Form &obj){
	COUT << "Form require grade " << obj.get_Min_sign() << " to sign it and grade " << obj.get_Min_exec() << " to excute it";
	return(COUT);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return("Grade for the Bureaucrat is too high for the requirment");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("Grade of the Bureaucrat is too low min for the requirment");
}