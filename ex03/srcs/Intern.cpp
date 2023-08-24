
#include "Intern.class.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &src) {
	(void)src;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &rhs) {
	(void)rhs;
	std::cout << "Intern assignation operator called" << std::endl;
	return *this;
}

AForm *Intern::makeShrubberyCreationForm(std::string const& target) const {
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomyRequestForm(std::string const& target) const {
	return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidentialPardonForm(std::string const& target) const {
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string const& formName, std::string const& target) const {

	// Define function signature
	typedef AForm* (Intern::*FunctionPtr)(std::string const& target) const;

	// Create array of function pointers
	FunctionPtr makeFormPtrs[3] = {
			&Intern::makeShrubberyCreationForm,
			&Intern::makeRobotomyRequestForm,
			&Intern::makePresidentialPardonForm
	};

	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (int i = 0; i < 3; i++) {
		if (formName == formNames[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*makeFormPtrs[i])(target);
		}
	}
	std::cout << "Intern cannot create " << formName << std::endl;
	return NULL;
}