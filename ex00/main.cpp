#include "Bureaucrat.hpp"

int main(){
	std::cout <<"--------------- grade too low ---------------" << std::endl;
	try{
		Bureaucrat f("Babi", 151);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<  std::endl;
	}
	std::cout <<"\n--------------- grade too high ---------------" << std::endl;

	try{
		Bureaucrat re("Ronaldo", 0);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<  std::endl;
	}

	std::cout <<"\n--------------- increment grade error---------------" << std::endl;	
	try{
		Bureaucrat r("Messi", 1);
		std::cout << r << std::endl;
		r.incre_grade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<  std::endl;
	}
	std::cout <<"\n--------------- decrement grade error---------------" << std::endl;
	try{
		Bureaucrat r("Abraham", 150);
		std::cout << r << std::endl;
		r.decre_grade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<  std::endl;
	}
	std::cout <<"\n--------------- increment grade  ---------------" << std::endl;
	try{
		Bureaucrat r("Pulisic", 3);
		std::cout << r << std::endl;
		r.incre_grade();
		std::cout << r << std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<  std::endl;
	}	
	std::cout <<"\n--------------- decrement grade ---------------" << std::endl;
	try{
		Bureaucrat r("Lamine", 4);
		std::cout << r << std::endl;
		r.decre_grade();
		std::cout << r << std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<  std::endl;
	}
}