
#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

#include "AForm.class.hpp"

class RobotomyRequestForm: public AForm {
	public:
		RobotomyRequestForm(const RobotomyRequestForm &src);			// Copy constructor
		virtual ~RobotomyRequestForm();									// Destructor
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);	// Assignment operator

		// Custom constructor
		RobotomyRequestForm(std::string const& target);

	private:
		RobotomyRequestForm();	// Default constructor
		void	executeChild() const;
};

#endif