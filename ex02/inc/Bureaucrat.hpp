/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:12:26 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/20 16:15:26 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
	const std::string	name;
	int					grade;

	public:
		// Constructors
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat &copy );

		// Destructor
		~Bureaucrat( void );

		// Copy assignment operator overload
		Bureaucrat & operator = ( const Bureaucrat &copy );


		// Getters
		std::string	getName( void ) const;
		int			getGrade( void ) const;

		// Methods
		void	incrementGrade( void );
		void	decrementGrade( void );
		void	signForm( AForm &aform );

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
std::ostream & operator << (std::ostream &out, const Bureaucrat &bureaucrat);

#endif