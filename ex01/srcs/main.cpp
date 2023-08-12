
#include <iostream>

#include "Bureaucrat.class.hpp"

int main(void) {

	std::cout << std::endl << "--- CORRECT TESTS ---" << std::endl;

	std::cout << "Creating a Bureaucrat with grade 150" << std::endl;
	try {
		Bureaucrat bureaucrat("Bernard", 150);
		std::cout << bureaucrat;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Bureaucrat with grade 1" << std::endl;
	try {
		Bureaucrat bureaucrat("Bernard", 1);
		std::cout << bureaucrat;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Bureaucrat with grade 2 and incrementing grade" << std::endl;
	try {
		Bureaucrat bureaucrat("Bernard", 2);
		std::cout << bureaucrat;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Bureaucrat with grade 149 and decrementing grade" << std::endl;
	try {
		Bureaucrat bureaucrat("Bernard", 149);
		std::cout << bureaucrat;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "--- WRONG TESTS ---" << std::endl;

	std::cout << std::endl << "Creating a Bureaucrat with grade 151" << std::endl;
	try {
		Bureaucrat bureaucrat("Bernard", 151);
		std::cout << bureaucrat;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Bureaucrat with grade 0" << std::endl;
	try {
		Bureaucrat bureaucrat("Bernard", 0);
		std::cout << bureaucrat;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Bureaucrat with grade 1 and incrementing grade" << std::endl;
	try {
		Bureaucrat bureaucrat("Bernard", 1);
		std::cout << bureaucrat;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Creating a Bureaucrat with grade 150 and decrementing grade" << std::endl;
	try {
		Bureaucrat bureaucrat("Bernard", 150);
		std::cout << bureaucrat;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
