
#include "Form.class.hpp"

Form::Form(): _name("default"), _isSigned(false), _gradeToSign(1), _gradeToExecute(1) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form &src): _name(src.getName()), _isSigned(src.getIsSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(const Form &rhs) {
	std::cout << "Form assignation operator called" << std::endl;
	this->_isSigned = rhs.getIsSigned();
	return *this;
}

Form::Form(std::string const name, int grade): _name(name), _isSigned(false), _gradeToSign(grade), _gradeToExecute(grade) {
	std::cout << "Form custom constructor called" << std::endl;
	if (grade < 1) {
		throw Form::GradeTooHighException();
	} else if (grade > 150) {
		throw Form::GradeTooLowException();
	}
}

std::string	Form::getName() const {
	return this->_name;
}

bool	Form::getIsSigned() const {
	return this->_isSigned;
}

int	Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int	Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {
	o << "Form name: " << rhs.getName() << std::endl;
	o << "Form is signed: " << rhs.getIsSigned() << std::endl;
	o << "Form grade to sign: " << rhs.getGradeToSign() << std::endl;
	o << "Form grade to execute: " << rhs.getGradeToExecute() << std::endl;
	return o;
}