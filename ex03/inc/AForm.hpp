/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:40:16 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/27 16:04:33 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

# define BOLD "\e[1m"
# define ITALIC "\e[3m"
# define UNDERLINE "\e[4m"
# define RED "\e[91m"
# define GREEN "\e[92m"
# define YELLOW "\e[93m"
# define BLUE "\e[94m"
# define PURPLE "\e[95m"
# define CYAN "\e[96m"
# define INVERT "\e[90m\e[107m"
# define RESET "\e[0m"

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