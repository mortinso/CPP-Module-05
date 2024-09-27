/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:12:09 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/27 15:44:04 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("PresidentialPardonForm", 25, 5), target("target") {
	// std::cout << "PresidentialPardonForm default constructor called" <<std::endl;
}

// Constructor
PresidentialPardonForm::PresidentialPardonForm( const std::string _target ) : AForm("PresidentialPardonForm", 25, 5), target(_target) {
	// std::cout << "PresidentialPardonForm constructor called" <<std::endl;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &_ppform ) : AForm(_ppform.getName(), 25, 5), target(_ppform.target) {
	// std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm( void ) {
	// std::cout << "PresidentialPardonForm destructor called" <<std::endl;
}

// Copy assignment operator overload
PresidentialPardonForm& PresidentialPardonForm::operator = ( const PresidentialPardonForm &_ppform ) {
	// std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this != &_ppform) {
		*this = _ppform;
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	PresidentialPardonForm::execution( void ) const {
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}