
#include <iostream>

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

void	test_create_form_with_grades(int gradeToSign, int gradeToExecute) {
	std::cout << std::endl << "--- TEST: create Form, grade to sign " << gradeToSign << ", grade to execute " << gradeToExecute << " ---" << std::endl;

	try {
		Form form("Contract", gradeToSign, gradeToExecute);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	test_copy_form() {
	std::cout << std::endl << "--- TEST: copy Form ---" << std::endl;

	Form form("Contract", 1, 1);
	std::cout << form;
	Form formCopy(form);
	std::cout << formCopy;
}

void	test_copy_with_affection() {
	std::cout << std::endl << "--- TEST: copy Form with affection ---" << std::endl;

	Form form("Contract", 1, 1);
	std::cout << form;
	Form formCopy("ContractCopy", 50, 50);
	std::cout << formCopy;
	formCopy = form;
	std::cout << formCopy;
}

void	test_sign_form(int gradeToSign, int gradeToExecute, int gradeBureaucrat) {
	std::cout << std::endl << "--- TEST: sign Form, grade to sign " << gradeToSign << ", grade to execute " << gradeToExecute << ", grade bureaucrat " << gradeBureaucrat << " ---" << std::endl;

	try {
		Form form("Contract", gradeToSign, gradeToExecute);
		std::cout << form;
		Bureaucrat bureaucrat("Bernard", gradeBureaucrat);
		std::cout << bureaucrat;
		bureaucrat.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	test_sign_form_already_signed()
{
	std::cout << std::endl << "--- TEST: sign Form already signed ---" << std::endl;

	try {
		Form form("Contract", 1, 1);
		std::cout << form;
		Bureaucrat bureaucrat("Bernard", 1);
		std::cout << bureaucrat;
		bureaucrat.signForm(form);
		std::cout << form;
		bureaucrat.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main() {
	test_create_form_with_grades(1, 1);
	test_create_form_with_grades(150, 150);
	test_create_form_with_grades(0, 1);
	test_create_form_with_grades(1, 0);
	test_create_form_with_grades(151, 1);
	test_create_form_with_grades(1, 151);

	test_copy_form();
	test_copy_with_affection();

	test_sign_form(1, 1, 1);
	test_sign_form(1, 1, 2);
	test_sign_form_already_signed();

	return 0;
}
