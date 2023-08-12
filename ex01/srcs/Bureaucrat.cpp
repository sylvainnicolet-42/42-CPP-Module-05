
#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(): _name("Bernard"), _grade(150) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src._name), _grade(src._grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	this->_grade = rhs._grade;
	return *this;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade) {
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string	Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}

void	Bureaucrat::incrementGrade() {
	std::cout << "incrementGrade" << std::endl;
	if (this->_grade <= 1 || this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade() {
	std::cout << "decrementGrade" << std::endl;
	if (this->_grade < 1 || this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form &form) const {
	if (form.getIsSigned())
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because it is already signed" << std::endl;
	else if (this->_grade > form.getGradeToSign())
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because his grade is too low" << std::endl;
	else {
		std::cout << this->_name << " signed " << form.getName() << std::endl;
		form.beSigned(*this);
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}