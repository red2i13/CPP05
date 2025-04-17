#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("Default"),  Min_sign(150), Min_exec(150){
	is_Signed = false;
}

AForm::AForm(AForm const &copy) : _name(copy.getName()), Min_sign(copy.get_Min_sign()), Min_exec(copy.get_Min_exec())
{
	is_Signed = copy.is_Signed;

}

AForm::~AForm(void) {

}

AForm const	&AForm::operator = (AForm const &other){
	(void)other;
	this->is_Signed = other.is_Signed;
	return (*this);
}
AForm::AForm(std::string name, int s, int e): _name(name), Min_sign(s), Min_exec(e){
	if(Min_sign < 1 || Min_exec < 1)
	throw GradeTooHighException();
	else if(Min_sign > 150 || Min_exec > 150)
	throw GradeTooLowException();
	is_Signed = false;

}
void AForm::beSigned(const Bureaucrat &obj){
	if(obj.getGrade() > get_Min_sign())
		throw GradeTooLowException();
	is_Signed = true;
}

bool AForm::getBool_s() const {
	return (is_Signed);
}

std::string AForm::getName() const{
	return (_name);
}
int AForm::get_Min_sign() const{
	return (Min_sign);
}
int AForm::get_Min_exec() const{
	return (Min_exec);
}

void AForm::check(int grade) const{
	if(getBool_s() == false)
		throw FormNotSignedException();
	else if(get_Min_exec() < grade)
		throw GradeTooLowException();
}

std::ostream & operator<< (std::ostream &COUT, const AForm &obj){
	COUT << "AForm require grade " << obj.get_Min_sign() << " to sign it and grade " << obj.get_Min_exec() << " to excute it";
	return(COUT);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return("Grade for the Bureaucrat is too high for the requirment");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return("Grade of the Bureaucrat is too low min for the requirment");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return("Tried to excute the Form that is not signed yet");
}
