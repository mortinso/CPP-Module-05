/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:12:19 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/21 18:20:23 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RobotomyRequestForm", 72, 45), target("target") {
	// std::cout << "RobotomyRequestForm default constructor called" <<std::endl;
}

// Constructor
RobotomyRequestForm::RobotomyRequestForm( std::string _target ) : AForm("RobotomyRequestForm", 72, 45), target(_target) {
	// std::cout << "RobotomyRequestForm constructor called" <<std::endl;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &_rrform ) : AForm(_rrform.getName(), 72, 45), target(_rrform.target) {
	// std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm( void ) {
	// std::cout << "RobotomyRequestForm destructor called" <<std::endl;
}

// Copy assignment operator overload
RobotomyRequestForm& RobotomyRequestForm::operator = ( const RobotomyRequestForm &_rrform ) {
	// std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this != &_rrform) {
		*this = _rrform;
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	RobotomyRequestForm::execution( void ) const {
	srand(time(0) * rand());
	std::cout << "WHIIIIIIIIIIIIIIIIIIRRRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
	std::cout << "BRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
	std::cout << "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;

	if ((rand() % 2) == 1)
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy of " << this->target << " failed.";
}