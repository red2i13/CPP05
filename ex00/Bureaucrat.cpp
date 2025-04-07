#include "Bureaucrat.hpp"
//Todo dont forget to throw an exception in the constructor is the grade doesn't follow the rules

Bureaucrat::Bureaucrat(void) {
	std::cout << "Default constructor called for Bureaucrat class" << std::endl;
	_name = "Default_name";
	grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	_name = copy._name;
	grade = copy.grade;
	std::cout << "Copy constructor called for Bureaucrat class" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Destructor called for Bureaucrat class" << std::endl;
}

Bureaucrat const	&Bureaucrat::operator = (Bureaucrat const &other)
{
	std::cout << "Copy constructor called for Bureaucrat class" << std::endl;
	return (*this);
}

int Bureaucrat::getGrade(){
	return(grade);
}

std::string Bureaucrat::getName(void){
	return(_name);
}

void  Bureaucrat::incre_grade(){
	//exception handling
	grade--;
	if(grade < 1)
		// throw exception
}
void  Bureaucrat::decre_grade(){
	grade++;
	if(grade > 150)
		//throw exception
}
