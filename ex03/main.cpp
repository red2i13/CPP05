#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

// dont forget to add in previous excercie virtual to aform destructor
int main(){
	try{

		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if(rrf)
			std::cout << rrf->getName() << std::endl;
		delete rrf;

	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}