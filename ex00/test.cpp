#include <iostream>

using namespace std;


class Printer{
	string _name;
	int _nPaper;
	public:
	Printer(string name, int paper){
		_name = name;
		_nPaper = paper;
	}
	void Print(string txt)
	{
		int required = txt.length() / 10;
		if(required > _nPaper)
			throw (size_t)5;
		cout << "Printing ..." << txt << endl;
		_nPaper -= required;
	}
};
int main(){
	Printer myprinter("Hp Pipi 33", 10);
	try{

		myprinter.Print("Hellow mother father this is me trivela");
		myprinter.Print("Hellow mother father this is me trivela");
		myprinter.Print("Hellow mother father this is me trivela");
		myprinter.Print("Hellow mother father this is me trivela");
	}
	catch (const char *txt_msg){
		cout << "Exception Thrown: " << txt_msg << endl;
	}
	catch(int num){

		cout << "Exception num: " << num << endl;
	}
	catch(...){
		cout << "Default catch launched" << endl;
	}
	system("read -n 1 -r -s");
}