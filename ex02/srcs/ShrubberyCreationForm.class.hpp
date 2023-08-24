
#ifndef SHUBBERYCREATIONFORM_CLASS_HPP
# define SHUBBERYCREATIONFORM_CLASS_HPP

#include "AForm.class.hpp"

class ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm(const ShrubberyCreationForm &src);			// Copy constructor
		virtual ~ShrubberyCreationForm();									// Destructor
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);	// Assignment operator

		// Custom constructor
		ShrubberyCreationForm(std::string const& target);

	private:
		ShrubberyCreationForm();	// Default constructor
		void	executeChild() const;
};

#endif