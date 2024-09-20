#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			executeGrade;

	public:
		// Constructors
		Form( void );
		Form( const Form &_form );
		Form( std::string _name, int _signGrade, int _executeGrade);

		// Destructor
		~Form( void );

		// Copy assignment operator overload
		Form & operator = ( const Form &_form );

		// Getters
		std::string	getName( void ) const;
		bool		getIsSigned( void ) const;
		int			getSignGrade( void ) const;
		int			getExecuteGrade( void ) const;

		// Methods
		void	beSigned( Bureaucrat &bureaucrat );

		// Exceptions
		class GradeTooHighException : public std::exception {
			public:
				const char *what( void ) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what( void ) const throw();
		};
};

// Insertion opperator overload
std::ostream & operator << (std::ostream &out, const Form &form);

#endif
