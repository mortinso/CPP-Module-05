/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:40:16 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/26 18:31:31 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			executeGrade;

	public:
		// Constructors
		AForm( void );
		AForm( const AForm &_aform );
		AForm( std::string _name, int _signGrade, int _executeGrade);

		// Destructor
		virtual ~AForm( void );

		// Copy assignment operator overload
		AForm & operator = ( const AForm &_aform );

		// Getters
		std::string	getName( void ) const;
		bool		getIsSigned( void ) const;
		int			getSignGrade( void ) const;
		int			getExecuteGrade( void ) const;

		// Methods
		void			beSigned( Bureaucrat &bureaucrat );
		void			execute( const Bureaucrat &executor ) const;
		virtual void	execution( void ) const = 0;

		// Exceptions
		class GradeTooHighException : public std::exception {
			public:
				const char *what( void ) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what( void ) const throw();
		};
		
		class FormNotSignedException : public std::exception {
			public:
				const char *what( void ) const throw();
		};
};

// Insertion opperator overload
std::ostream & operator << (std::ostream &out, const AForm &aform);

#endif