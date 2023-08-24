
#include <iostream>

#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

void	test_sign_shrubbery_form(int gradeBureaucrat) {
	std::cout << std::endl << "--- TEST: sign ShrubberyCreationForm ---" << std::endl;

	try {
		ShrubberyCreationForm shrubberyCreationForm("garden");
		std::cout << shrubberyCreationForm;
		Bureaucrat bureaucrat("Bernard", gradeBureaucrat);
		std::cout << bureaucrat;
		bureaucrat.signForm(shrubberyCreationForm);
		std::cout << shrubberyCreationForm;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	test_exec_shrubbery_form(int gradeBureaucrat, bool signBefore) {
	std::cout << std::endl << "--- TEST: execute ShrubberyCreationForm ---" << std::endl;

	try {
		ShrubberyCreationForm shrubberyCreationForm("garden");
		std::cout << shrubberyCreationForm;
		Bureaucrat bureaucrat("Bernard", gradeBureaucrat);
		std::cout << bureaucrat;
		if (signBefore)
			bureaucrat.signForm(shrubberyCreationForm);
		bureaucrat.executeForm(shrubberyCreationForm);
		std::cout << shrubberyCreationForm;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	test_sign_presidential_form(int gradeBureaucrat) {
	std::cout << std::endl << "--- TEST: sign PresidentialPardonForm ---" << std::endl;

	try {
		PresidentialPardonForm presidentialPardonForm("Trump");
		std::cout << presidentialPardonForm;
		Bureaucrat bureaucrat("Bernard", gradeBureaucrat);
		std::cout << bureaucrat;
		bureaucrat.signForm(presidentialPardonForm);
		std::cout << presidentialPardonForm;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	test_exec_presidential_form(int gradeBureaucrat, bool signBefore) {
	std::cout << std::endl << "--- TEST: execute PresidentialPardonForm ---" << std::endl;

	try {
		PresidentialPardonForm presidentialPardonForm("Trump");
		std::cout << presidentialPardonForm;
		Bureaucrat bureaucrat("Bernard", gradeBureaucrat);
		std::cout << bureaucrat;
		if (signBefore)
			bureaucrat.signForm(presidentialPardonForm);
		bureaucrat.executeForm(presidentialPardonForm);
		std::cout << presidentialPardonForm;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main() {
	test_sign_shrubbery_form(145);
	test_sign_shrubbery_form(146);
	test_exec_shrubbery_form(130, false);
	test_exec_shrubbery_form(138, true);
	test_exec_shrubbery_form(137, true);

	test_sign_presidential_form(25);
	test_sign_presidential_form(26);
	test_exec_presidential_form(1, false);
	test_exec_presidential_form(5, true);
	test_exec_presidential_form(6, true);

	return 0;
}
