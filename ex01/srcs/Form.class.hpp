
#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form {
	public:
		Form(const Form &src);				// Copy constructor
		~Form();							// Destructor
		Form &operator=(const Form &rhs);	// Assignment operator

		// Custom constructor
		Form(std::string const& name, int gradeToSign, int gradeToExecute);

		// Getters and setters
		std::string	getName() const;
		bool 		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		// Functions
		void	beSigned(const Bureaucrat &bureaucrat);

	private:
		Form();	// Default constructor
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSign;
		int const			_gradeToExecute;

	// Exceptions
	class GradeTooHighException: public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Grade is too high";
		}
	};

	class GradeTooLowException: public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Grade is too low";
		}
	};

	class FormAlreadySignedException: public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Form is already signed";
		}
	};
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif
