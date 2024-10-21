/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:26:27 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/21 16:37:25 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

// Default constructor
Form::Form( void ) : name("form"), isSigned(false), signGrade(150), executeGrade(150) {
	// std::cout << "Form default constructor called" <<std::endl;
}

// constructor
Form::Form( std::string _name, int _signGrade, int _executeGrade) : name(_name), isSigned(false), \
	signGrade(_signGrade), executeGrade(_executeGrade)
{
	// std::cout << "Form constructor called" <<std::endl;
	if (_signGrade > 150 || _executeGrade > 150)
		throw(GradeTooLowException());
	if (_signGrade < 1 || _executeGrade < 1)
		throw(GradeTooHighException());
}

// Copy constructor
Form::Form( const Form &_form ) : name(_form.name), isSigned(_form.isSigned), \
	signGrade(_form.signGrade), executeGrade(_form.executeGrade)
{
	// std::cout << "Form copy constructor called" << std::endl;
}

// Destructor
Form::~Form( void ) {
	// std::cout << "Form destructor called" <<std::endl;
}

// Copy assignment operator overload
Form& Form::operator = ( const Form &_form ) {
	// std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &_form) {
		this->isSigned = _form.isSigned;
	}
	return (*this);
}

// -----------------------------------Getters-----------------------------------
std::string Form::getName( void ) const {
	return (this->name);
}

bool Form::getIsSigned( void ) const {
	return (this->isSigned);
}

int Form::getSignGrade( void ) const {
	return (this->signGrade);
}

int Form::getExecuteGrade( void ) const {
	return (this->executeGrade);
}

// -----------------------------------Methods-----------------------------------

void Form::beSigned( Bureaucrat &bureaucrat ) {
	if (bureaucrat.getGrade() > this->signGrade)
		throw (GradeTooLowException());
	this->isSigned = true;
}

// -----------------------------------Exceptions--------------------------------
const char *Form::GradeTooHighException::what( void ) const throw() {
	return ("Grade is too high.");
}

const char *Form::GradeTooLowException::what( void ) const throw() {
	return ("Grade is too low.");
}

// Insertion operator overload
std::ostream& operator << ( std::ostream &out, const Form &form ) {
	return (out << "Form: " << form.getName() << std::endl << "Signed: " << form.getIsSigned() << std::endl \
		<< "Sign Grade: " << form.getSignGrade() << std::endl << "Execute Grade: " << form.getExecuteGrade() << std::endl);
}