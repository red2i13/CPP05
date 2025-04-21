#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(){
	try{

		Bureaucrat f("mo7a", 1);
		ShrubberyCreationForm F("sam");
		F.beSigned(f);
		f.signForm(F);
		f.executeForm(F);
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try{

		Bureaucrat s("Jilali", 30);
		RobotomyRequestForm R("titi");
		R.beSigned(s);
		s.signForm(R);
		s.executeForm(R);
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try{

		Bureaucrat s("Fadi", 5);
		PresidentialPardonForm P("titi");
		P.beSigned(s);
		s.signForm(P);
		s.executeForm(P);
		
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
}