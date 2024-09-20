/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:12:28 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/20 16:12:29 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm( void ) {
	std::cout << "ShrubberyCreationForm default constructor called" <<std::endl;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &_shrubberycreationform ) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = _shrubberycreationform;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "ShrubberyCreationForm destructor called" <<std::endl;
}

// Copy assignment operator overload
ShrubberyCreationForm& ShrubberyCreationForm::operator = ( const ShrubberyCreationForm &_shrubberycreationform ) {
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this != &_shrubberycreationform) {
		// this->setValue(_shrubberycreationform.getValue());
	}
	return (*this);
}

// -----------------------------------Getters-----------------------------------

// -----------------------------------Setters-----------------------------------

// -----------------------------------Methods-----------------------------------
