/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:58:55 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/27 17:32:35 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		// Constructors
		Intern( void );
		Intern( const Intern &_intern );

		// Destructor
		~Intern( void );

		// Copy assignment operator overload
		Intern & operator = ( const Intern &_intern );

		// Methods
		AForm	*makeForm(std::string formName, const std::string _target);
		AForm	*makeShrubberyCreationForm(const std::string _target);
		AForm	*makeRobotomyRequestForm(const std::string _target);
		AForm	*makePresidentialPardonForm(const std::string _target);

		// Exceptions
		class WrongFormNameException : public std::exception {
			public:
				const char *what( void ) const throw();
		};
};

#endif
