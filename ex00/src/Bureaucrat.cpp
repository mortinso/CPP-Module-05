/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:12:35 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/06 15:49:00 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat( void ) {
	std::cout << "Bureaucrat default constructor called" <<std::endl;
}

// Bureaucrat::Bureaucrat( std::string name, int grade );

// Copy constructor
Bureaucrat::Bureaucrat( const Bureaucrat &bureaucrat ) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = bureaucrat;
}

// Destructor
Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat destructor called" <<std::endl;
}

// Copy assignment operator overload
Bureaucrat& Bureaucrat::operator = ( const Bureaucrat &bureaucrat ) {
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &bureaucrat) {
		// this->setValue(bureaucrat.getValue());
	}
	return (*this);
}

// Insertion operator overload
std::ostream& Bureaucrat::operator << ( const Bureaucrat &bureaucrat ) {
	std::cout << this->getName() << ", bureaucrat grade " << this->getGrade() << "." << std::endl;
}

// -----------------------------------Getters-----------------------------------
const std::string Bureaucrat::getName( void ){
	return (this->name);
}

int Bureaucrat::getGrade( void ){
	return (this->grade);
}
// -----------------------------------Setters-----------------------------------

// -----------------------------------Methods-----------------------------------
// void Bureaucrat::incrementGrade( void );

// void Bureaucrat::decrementGrade( void );