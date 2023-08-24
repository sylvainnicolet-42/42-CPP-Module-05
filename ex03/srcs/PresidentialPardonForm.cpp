
#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "presidential target default") {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
	this->AForm::operator=(rhs);
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : AForm("PresidentialPardonForm", 25, 5, target) {
	std::cout << "PresidentialPardonForm custom constructor called" << std::endl;
}

void PresidentialPardonForm::executeChild() const {
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}