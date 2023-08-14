
#include <fstream>
#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "shrubbery target default") {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	this->AForm::operator=(rhs);
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreationForm", 145, 137, target) {
	std::cout << "ShrubberyCreationForm custom constructor called" << std::endl;
}

void ShrubberyCreationForm::executeChild() const {
	std::cout << "ShrubberyCreationForm executeChild called" << std::endl;
	std::ofstream ofs(this->getTarget() + "_shrubbery");
	ofs << "       _-_" << std::endl;
	ofs << "    /~~   ~~\\" << std::endl;
	ofs << " /~~         ~~\\" << std::endl;
	ofs << "{               }" << std::endl;
	ofs << " \\  _-     -_  /" << std::endl;
	ofs << "   ~  \\\\ //  ~" << std::endl;
	ofs << "_- -   | | _- _" << std::endl;
	ofs << "  _ -  | |   -_" << std::endl;
	ofs << "      // \\\\" << std::endl;
	ofs << "     //   \\\\" << std::endl;
	ofs << "    //     \\\\" << std::endl;
	ofs << "   //       \\\\" << std::endl;
	ofs << "  //         \\\\" << std::endl;
	ofs << " //           \\\\" << std::endl;
	ofs << "//             \\\\" << std::endl;
	ofs << "___________________" << std::endl;
}