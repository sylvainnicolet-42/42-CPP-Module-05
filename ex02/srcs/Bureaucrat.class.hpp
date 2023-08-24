
#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include "AForm.class.hpp"

class AForm;

class Bureaucrat {
	public:
		Bureaucrat(const Bureaucrat &src);				// Copy constructor
		~Bureaucrat();									// Destructor
		Bureaucrat &operator=(const Bureaucrat &rhs);	// Assignment operator

		// Custom constructor
		Bureaucrat(std::string const& name, int grade);

		// Getters and setters
		std::string	getName() const;
		int			getGrade() const;

		// Functions
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm &form) const;
		void	executeForm(AForm const &form) const;

	private:
		Bureaucrat();	// Default constructor
		std::string const	_name;
		int					_grade;

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

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
