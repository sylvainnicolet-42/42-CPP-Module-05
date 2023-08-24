
#include <iostream>
#include "Intern.class.hpp"
#include "AForm.class.hpp"

void	test_make_form(std::string const& formName, std::string const& target) {
	std::cout << std::endl << "--- TEST: make form ---" << std::endl;

	Intern someRandomIntern;
	AForm *form;
	form = someRandomIntern.makeForm(formName, target);
	if (form != NULL)
		std::cout << *form;
	else
		std::cout << "Form is NULL" << std::endl;
	delete form;
}

int main() {

	test_make_form("robotomy request", "robot");
	test_make_form("presidential pardon", "Trump");
	test_make_form("shrubbery creation", "garden");
	test_make_form("unknown form", "Bender");

	return 0;
}
