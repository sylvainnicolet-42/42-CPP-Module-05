
#include <iostream>

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main(void) {

	std::cout << std::endl << "--- CORRECT TESTS ---" << std::endl;

	std::cout << std::endl << "Creating a Bureaucrat with grade 1 and signing a Form with grade 1" << std::endl;
	try {
		Bureaucrat bureaucrat("Bernard", 1);
		std::cout << bureaucrat;
		Form form("Form", 1, 1);
		std::cout << form;
		form.beSigned(bureaucrat);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Bureaucrat with grade 1 and signing a Form with grade 1" << std::endl;
	try {
		Bureaucrat bureaucrat("Jean", 1);
		std::cout << bureaucrat;
		Form form("Contract", 1, 1);
		std::cout << form;
		bureaucrat.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "--- WRONG TESTS ---" << std::endl;

	std::cout << std::endl << "Creating a Bureaucrat with grade 2 and signing a Form with grade 1" << std::endl;
	try {
		Bureaucrat bureaucrat("Bernard", 2);
		std::cout << bureaucrat;
		Form form("Form", 1, 1);
		std::cout << form;
		form.beSigned(bureaucrat);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Bureaucrat with grade 2 and signing a Form with grade 1" << std::endl;
	try {
		Bureaucrat bureaucrat("Jean", 2);
		std::cout << bureaucrat;
		Form form("Contract", 1, 1);
		std::cout << form;
		bureaucrat.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Form with grade to sign 0" << std::endl;
	try {
		Form form("Form", 0, 1);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Form with grade to execute 0" << std::endl;
	try {
		Form form("Form", 1, 0);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Form with grade to sign 151" << std::endl;
	try {
		Form form("Form", 151, 1);
		std::cout << form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
