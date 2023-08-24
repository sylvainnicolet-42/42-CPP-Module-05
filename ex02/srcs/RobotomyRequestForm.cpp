
#include "RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "robotomy target default") {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
	this->AForm::operator=(rhs);
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : AForm("RobotomyRequestForm", 72, 45, target) {
	std::cout << "RobotomyRequestForm custom constructor called" << std::endl;
}

void RobotomyRequestForm::executeChild() const {
	std::cout << "BzzzzZZZzzzzZZZzzzZZZzzz!" << std::endl;

	// 50% chance of success
	if (std::rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
	else
		std::cout << this->getTarget() << " robotomization failed!" << std::endl;
}