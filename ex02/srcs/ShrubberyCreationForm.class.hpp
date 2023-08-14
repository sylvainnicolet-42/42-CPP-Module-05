
#ifndef SHUBBERYCREATIONFORM_CLASS_HPP
# define SHUBBERYCREATIONFORM_CLASS_HPP

#include "AForm.class.hpp"

class ShrubberyCreationForm: public AForm {
public:
	ShrubberyCreationForm();											// Default constructor
	ShrubberyCreationForm(const ShrubberyCreationForm &src);			// Copy constructor
	virtual ~ShrubberyCreationForm();									// Destructor
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);	// Assignment operator

	// Custom constructor
	ShrubberyCreationForm(std::string const target);

	// Functions
	void	execute(Bureaucrat const &executor) const;
};



#endif