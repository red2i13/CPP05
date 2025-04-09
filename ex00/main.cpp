#include "Bureaucrat.hpp"

int main(){
	//grade too low
	try{
		Bureaucrat f("babi", 151);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<  std::endl;
	}

	//grade too high
	try{
		Bureaucrat re("", 0);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<  std::endl;
	}

	//grade is correct
	try{
		Bureaucrat r("", 1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<  std::endl;
	}
}