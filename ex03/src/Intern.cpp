/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:58:45 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/27 17:40:20 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

// Default constructor
Intern::Intern( void ) {
	// std::cout << "Intern default constructor called" <<std::endl;
}

// Copy constructor
Intern::Intern( const Intern &_intern ) {
	// std::cout << "Intern copy constructor called" << std::endl;
	*this = _intern;
}

// Destructor
Intern::~Intern( void ) {
	// std::cout << "Intern destructor called" <<std::endl;
}

// Copy assignment operator overload
Intern& Intern::operator = ( const Intern &_intern ) {
	// std::cout << "Intern copy assignment operator called" << std::endl;
	if (this != &_intern) {
		*this = _intern;
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
AForm	*Intern::makeForm( std::string formName, const std::string _target ) {
	std::string	names[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };

	AForm *(Intern::*functions[3])(std::string _target) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm
	};

	for (unsigned int i = 0; i < formName.length(); i++)
		formName[i] = tolower(formName[i]);

	for (int i = 0; i < 3; i++) {
		if (formName == names[i])
		{
			std::cout << "Intern creates a " << names[i] << " form." << std::endl;
			return ((this->*functions[i])(_target));
		}
	}

	throw (WrongFormNameException());
	return (NULL);
}

AForm	*Intern::makeShrubberyCreationForm( const std::string _target ) {
	return (new ShrubberyCreationForm(_target));
}

AForm	*Intern::makeRobotomyRequestForm( const std::string _target ) {
	return (new RobotomyRequestForm(_target));
}

AForm	*Intern::makePresidentialPardonForm( const std::string _target ) {
	return (new PresidentialPardonForm(_target));
}

// -----------------------------------Exceptions--------------------------------
const char *Intern::WrongFormNameException::what( void ) const throw(){
	return ("Requested Form doesn't exist.\n");
}