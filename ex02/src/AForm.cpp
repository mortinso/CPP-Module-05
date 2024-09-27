/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:26:27 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/27 16:30:10 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

// Default constructor
AForm::AForm( void ) : name("aform"), isSigned(false), signGrade(150), executeGrade(150) {
	// std::cout << "AForm default constructor called" <<std::endl;
}

// constructor
AForm::AForm( std::string _name, int _signGrade, int _executeGrade) : name(_name), isSigned(false), \
	signGrade(_signGrade), executeGrade(_executeGrade)
{
	// std::cout << "AForm constructor called" <<std::endl;
	if (_signGrade > 150 || _executeGrade > 150)
		throw(GradeTooLowException());
	if (_signGrade < 1 || _executeGrade < 1)
		throw(GradeTooHighException());
}

// Copy constructor
AForm::AForm( const AForm &_aform ) : name(_aform.name), isSigned(_aform.isSigned), \
	signGrade(_aform.signGrade), executeGrade(_aform.executeGrade)
{
	// std::cout << "AForm copy constructor called" << std::endl;
}

// Destructor
AForm::~AForm( void ) {
	// std::cout << "AForm destructor called" <<std::endl;
}

// Copy assignment operator overload
AForm& AForm::operator = ( const AForm &_aform ) {
	// std::cout << "AForm copy assignment operator called" << std::endl;
	if (this != &_aform) {
		this->isSigned = _aform.isSigned;
	}
	return (*this);
}

// -----------------------------------Getters-----------------------------------
std::string AForm::getName( void ) const {
	return (this->name);
}

bool AForm::getIsSigned( void ) const {
	return (this->isSigned);
}

int AForm::getSignGrade( void ) const {
	return (this->signGrade);
}

int AForm::getExecuteGrade( void ) const {
	return (this->executeGrade);
}

// -----------------------------------Methods-----------------------------------

void AForm::beSigned( Bureaucrat &bureaucrat ) {
	if (bureaucrat.getGrade() > this->signGrade)
		throw (GradeTooLowException());
	this->isSigned = true;
}

void AForm::execute( const Bureaucrat &executor ) const {
	if (this->isSigned == false)
		throw (FormNotSignedException());
	if (executor.getGrade() > this->executeGrade)
		throw (GradeTooLowException());

	this->execution();
}

// -----------------------------------Exceptions--------------------------------
const char *AForm::GradeTooHighException::what( void ) const throw() {
	return ("Grade is too high.");
}

const char *AForm::GradeTooLowException::what( void ) const throw() {
	return ("Grade is too low.");
}

const char *AForm::FormNotSignedException::what( void ) const throw() {
	return ("Form isn't signed.");
}

// Insertion operator overload
std::ostream& operator << ( std::ostream &out, const AForm &aform ) {
	return (out << "Form: " << aform.getName() << std::endl << "Signed: " << aform.getIsSigned() << std::endl \
		<< "Sign Grade: " << aform.getSignGrade() << std::endl << "Execute Grade: " << aform.getExecuteGrade() << std::endl);
}