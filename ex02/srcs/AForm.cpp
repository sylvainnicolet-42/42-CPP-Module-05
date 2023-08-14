
#include "AForm.class.hpp"

AForm::AForm(): _name("default"), _isSigned(false), _gradeToSign(1), _gradeToExecute(1), _target("default") {
	std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(const AForm &src): _name(src.getName()), _isSigned(src.getIsSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()), _target(src.getTarget()) {
	std::cout << "Form copy constructor called" << std::endl;
}

AForm::~AForm() {
	std::cout << "Form destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &rhs) {
	std::cout << "Form assignation operator called" << std::endl;
	this->_isSigned = rhs.getIsSigned();
	return *this;
}

AForm::AForm(std::string const name, int gradeToSign, int gradeToExecute, std::string const target): _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target) {
	std::cout << "Form custom constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

std::string	AForm::getName() const {
	return this->_name;
}

bool	AForm::getIsSigned() const {
	return this->_isSigned;
}

int	AForm::getGradeToSign() const {
	return this->_gradeToSign;
}

int	AForm::getGradeToExecute() const {
	return this->_gradeToExecute;
}

std::string	AForm::getTarget() const {
	return this->_target;
}

void	AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else if (this->_isSigned)
		std::cout << bureaucrat.getName() << " couldn’t sign " << this->_name << " because it is already signed" << std::endl;
	else
		this->_isSigned = true;
}

void	AForm::execute(const Bureaucrat &executor) const {
	if (!this->_isSigned)
		std::cout << executor.getName() << " couldn’t execute " << this->_name << " because it is not signed" << std::endl;
	else if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
	else {
		executeChild();
	}
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs) {
	o << "Form name: " << rhs.getName() << std::endl;
	o << "Form is signed: " << rhs.getIsSigned() << std::endl;
	o << "Form grade to sign: " << rhs.getGradeToSign() << std::endl;
	o << "Form grade to execute: " << rhs.getGradeToExecute() << std::endl;
	o << "Form target: " << rhs.getTarget() << std::endl;
	return o;
}