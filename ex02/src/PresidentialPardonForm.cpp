/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:12:09 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/20 16:12:11 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm( void ) {
	std::cout << "PresidentialPardonForm default constructor called" <<std::endl;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &_presidentialpardonform ) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = _presidentialpardonform;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "PresidentialPardonForm destructor called" <<std::endl;
}

// Copy assignment operator overload
PresidentialPardonForm& PresidentialPardonForm::operator = ( const PresidentialPardonForm &_presidentialpardonform ) {
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this != &_presidentialpardonform) {
		// this->setValue(_presidentialpardonform.getValue());
	}
	return (*this);
}

// -----------------------------------Getters-----------------------------------

// -----------------------------------Setters-----------------------------------

// -----------------------------------Methods-----------------------------------
