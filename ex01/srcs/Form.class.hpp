
#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include "Bureaucrat.class.hpp"

class Form {
	public:
		Form();								// Default constructor
		Form(const Form &src);				// Copy constructor
		~Form();							// Destructor
		Form &operator=(const Form &rhs);	// Assignment operator

		// Custom constructor
		Form(std::string const name, int gradeToSign, int gradeToExecute);

		// Getters and setters
		std::string	getName() const;
		bool 		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		// Functions
		void	beSigned(Bureaucrat &bureaucrat);

	private:
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
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif
