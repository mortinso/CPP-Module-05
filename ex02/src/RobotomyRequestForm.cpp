/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:12:19 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/20 16:12:20 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm( void ) {
	std::cout << "RobotomyRequestForm default constructor called" <<std::endl;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &_robotomyrequestform ) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = _robotomyrequestform;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "RobotomyRequestForm destructor called" <<std::endl;
}

// Copy assignment operator overload
RobotomyRequestForm& RobotomyRequestForm::operator = ( const RobotomyRequestForm &_robotomyrequestform ) {
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this != &_robotomyrequestform) {
		// this->setValue(_robotomyrequestform.getValue());
	}
	return (*this);
}

// -----------------------------------Getters-----------------------------------

// -----------------------------------Setters-----------------------------------

// -----------------------------------Methods-----------------------------------
