
#include <iostream>

#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"

int main() {

	std::cout << std::endl << "--- CORRECT TESTS ---" << std::endl;

	std::cout << std::endl << "Creating a ShrubberyCreationForm" << std::endl;
	ShrubberyCreationForm shrubberyCreationForm("home");
	std::cout << shrubberyCreationForm;
	Bureaucrat admin("Admin", 1);
	std::cout << admin;
	admin.signForm(shrubberyCreationForm);
	std::cout << shrubberyCreationForm;
	admin.executeForm(shrubberyCreationForm);

	std::cout << std::endl << "--- WRONG TESTS ---" << std::endl;

	return 0;
}
