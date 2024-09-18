/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:12:35 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/18 20:49:52 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat( void ) : name("Cortex"), grade(150){
	// std::cout << "Bureaucrat default constructor called" <<std::endl;
}

Bureaucrat::Bureaucrat( std::string _name, int _grade ) : name(_name) {
	// std::cout << "Bureaucrat constructor called" <<std::endl;
	if (_grade > 150)
		throw(GradeTooLowException());
	if (_grade < 1)
		throw(GradeTooHighException());
	this->grade = _grade;
}

// Copy constructor
Bureaucrat::Bureaucrat( const Bureaucrat &copy ) : name(copy.name), grade(copy.grade) {
	// std::cout << "Bureaucrat copy constructor called" << std::endl;
}

// Destructor
Bureaucrat::~Bureaucrat( void ) {
	// std::cout << "Bureaucrat destructor called" <<std::endl;
}

// Copy assignment operator overload
Bureaucrat& Bureaucrat::operator = ( const Bureaucrat &copy ) {
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &copy)
		this->grade = copy.grade;
	return (*this);
}

// -----------------------------------Getters-----------------------------------
std::string Bureaucrat::getName( void ) const {
	return (this->name);
}

int Bureaucrat::getGrade( void ) const {
	return (this->grade);
}

// -----------------------------------Methods-----------------------------------
void Bureaucrat::incrementGrade( void ) {
	if (this->grade == 1)
		throw(GradeTooHighException());
	this->grade--;
}

void Bureaucrat::decrementGrade( void ) {
	if (this->grade == 150)
		throw(GradeTooLowException());
	this->grade++;
}

void Bureaucrat::signForm( Form &form ) {
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

// -----------------------------------Exceptions--------------------------------
const char *Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return ("Grade is too high.");
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return ("Grade is too low.");
}

// Insertion operator overload
std::ostream& operator << ( std::ostream &out, const Bureaucrat &bureaucrat ) {
	return (out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl);
}