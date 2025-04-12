#include "Bureaucrat.hpp"
#include "Form.hpp"


//todo dont forget to add exception in the constructor if the grades ar not crorrdct  
int main(){
	try{
		Bureaucrat b("Sami", 4);
		Form a("Watiqa", 5,1);
		a.beSigned(b);
		b.signForm(a);
		
	}
	catch(std::exception &e){
		std::cout << e.what() <<  std::endl;
	}
}