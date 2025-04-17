#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("Anyone") {

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm("ShrubberyCreationForm", 145, 137), _target(copy._target)
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

}

ShrubberyCreationForm const	&ShrubberyCreationForm::operator = (ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    check(executor.getGrade());
    std::string filename = _target + "_shrubbery";
    std::fstream new_file(filename.c_str(), std::fstream::out);
    new_file << "                                                         .\n"
                "                                              .         ;  \n"
                "                 .              .              ;%     ;;   \n"
                "                   ,           ,                :;%  %;   \n"
                "                    :         ;                   :;%;'     .,   \n"
                "           ,.        %;     %;            ;        %;'    ,;\n"
                "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
                "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
                "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
                "                `%;.     ;%;     %;'         `;%%;.%;'\n"
                "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
                "                    `:%;.  :;bd%;          %;@%;'\n"
                "                      `@%:.  :;%.         ;@@%;'   \n"
                "                        `@%.  `;@%.      ;@@%;         \n"
                "                          `@%%. `@%%    ;@@%;        \n"
                "                            ;@%. :@%%  %@@%;       \n"
                "                              %@bd%%%bd%%:;     \n"
                "                                #@%%%%%:;;\n"
                "                                %@@%%%::;\n"
                "                                %@@@%(o);  . '         \n"
                "                                %@@@o%;:(.,'         \n"
                "                            `.. %@@@o%::;         \n"
                "                               `)@@@o%::;         \n"
                "                                %@@(o)::;        \n"
                "                               .%@@@@%::;         \n"
                "                               ;%@@@@%::;.          \n"
                "                              ;%@@@@%%:;;;. \n"
                "                          ...;%@@@@@%%:;;;;,..\n";
}