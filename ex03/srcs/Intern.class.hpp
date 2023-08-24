
#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# include <iostream>
# include "AForm.class.hpp"
# include "ShrubberyCreationForm.class.hpp"
# include "RobotomyRequestForm.class.hpp"
# include "PresidentialPardonForm.class.hpp"

class Intern {
	public:
		Intern();								// Default constructor
		Intern(const Intern &src);				// Copy constructor
		~Intern();									// Destructor
		Intern &operator=(const Intern &rhs);	// Assignment operator

		// Functions
		AForm *makeForm(std::string const& formName, std::string const& target) const;

	private:
		AForm *makeShrubberyCreationForm(std::string const& target) const;
		AForm *makeRobotomyRequestForm(std::string const& target) const;
		AForm *makePresidentialPardonForm(std::string const& target) const;
};

#endif
