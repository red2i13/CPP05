#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default_name"){
	grade = 150;
}
Bureaucrat::Bureaucrat(std::string name, int grade)	: _name(name){
	if(grade < 1 )
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();

	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy):	_name (copy._name)
{
	grade = copy.grade;
}

Bureaucrat::~Bureaucrat(void) {
}

Bureaucrat const	&Bureaucrat::operator = (Bureaucrat const &other)
{
	(*this).grade = other.grade;
	return (*this);
}

int Bureaucrat::getGrade() const{
	return(grade);
}

std::string Bureaucrat::getName(void) const{
	return(_name);
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade of the Bureaucrat is too high min is grade 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade of the Bureaucrat is too low min is grade 150");
}
void  Bureaucrat::incre_grade(){
	grade--;
	if(grade < 1)
		throw GradeTooHighException();
}
void  Bureaucrat::decre_grade(){
	grade++;
	if(grade > 150)
		throw GradeTooLowException();
}

std::ostream& operator<< (std::ostream& COUT, const Bureaucrat &obj){
	COUT << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return(COUT);
}

void Bureaucrat::signForm(AForm &obj){
	if(obj.getBool_s() == true)
		std::cout << this->getName() << " signed " << obj.getName() << std::endl;
	else
	std::cout << this->getName() << " couldn’t sign " << obj.getName() << \
" because he hasn't signed it yet." << std::endl;

}

void Bureaucrat::executeForm(AForm const & form){
	form.execute(*this);
	std::cout << _name << " executed " << form.getName() << std::endl; 
}
