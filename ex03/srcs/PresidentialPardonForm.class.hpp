
#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

#include "AForm.class.hpp"

class PresidentialPardonForm: public AForm {
	public:
		PresidentialPardonForm(const PresidentialPardonForm &src);				// Copy constructor
		virtual ~PresidentialPardonForm();										// Destructor
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);	// Assignment operator

		// Custom constructor
		PresidentialPardonForm(std::string const& target);

	private:
		PresidentialPardonForm();	// Default constructor
		void	executeChild() const;
};

#endif