#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(){

		try{
		Bureaucrat b("Sami", 1);
		Form a("Watiqa", 5,0);
		a.beSigned(b);
		b.signForm(a);
		
	}
	catch(std::exception &e){
		std::cout <<"EXCEPTION: "<< e.what() <<  std::endl;
	}
	std::cout << "\n-----------------Grade of bereaucrat too low form constrctor-----------------\n";

	try{
		Bureaucrat b("Sami", 1);
		Form a("Watiqa", 5,151);
		a.beSigned(b);
		b.signForm(a);
		
	}
	catch(std::exception &e){
		std::cout <<"EXCEPTION: "<< e.what() <<  std::endl;
	}

	std::cout << "\n-----------------Grade of bereaucrat is too low to sign it-----------------\n";
	try{
		Bureaucrat b("Sami", 5);
		Form a("Watiqa", 4, 1);
		a.beSigned(b);
		b.signForm(a);
		
	}
	catch(std::exception &e){
		std::cout <<"EXCEPTION: "<< e.what() <<  std::endl;
	}

	std::cout << "\n-----------------Bereaucrat not sign it yet-----------------\n";
	try{
		Bureaucrat c("Tom", 1);
		Form g("Warqa", 4, 1);
		c.signForm(g);
		
	}
	catch(std::exception &e){
		std::cout <<"EXCEPTION: "<< e.what() <<  std::endl;
	}
	std::cout << "\n-----------------Grade of bereaucrat is high grade to sign it-----------------\n";
	try{
		Bureaucrat b("Sami", 1);
		Form a("Watiqa", 4, 1);
		a.beSigned(b);
		b.signForm(a);
		
	}
	catch(std::exception &e){
		std::cout <<"EXCEPTION: "<< e.what() <<  std::endl;
	}
	std::cout << "\n-----------------Grade of bereaucrat is the requirement-----------------\n";
	try{
		Bureaucrat b("Leo", 2);
		Form a("Fiche", 2, 1);
		std::cout << a << std::endl;
		a.beSigned(b);
		b.signForm(a);
		
	}
	catch(std::exception &e){
		std::cout <<"EXCEPTION: "<< e.what() <<  std::endl;
	}
}