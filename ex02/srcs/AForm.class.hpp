
#ifndef AFORM_CLASS_HPP
# define AFORM_CLASS_HPP

# include <iostream>
# include "Bureaucrat.class.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm();								// Default constructor
		AForm(const AForm &src);				// Copy constructor
		virtual ~AForm();						// Destructor
		AForm &operator=(const AForm &rhs);		// Assignment operator

		// Custom constructor
		AForm(std::string const name, int gradeToSign, int gradeToExecute, std::string const target);

		// Getters and setters
		std::string	getName() const;
		bool 		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		std::string	getTarget() const;

		// Functions
		void	beSigned(const Bureaucrat &bureaucrat);
		virtual void	execute(Bureaucrat const &executor) const = 0;

	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		std::string const	_target;

	// Exceptions
	protected:
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

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif