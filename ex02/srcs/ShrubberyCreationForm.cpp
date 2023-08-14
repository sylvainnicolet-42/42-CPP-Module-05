
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

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (!this->getIsSigned())
		std::cout << executor.getName() << " couldn’t execute " << this->getName() << " because it is not signed" << std::endl;
	else {
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
}