/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:12:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/21 16:44:34 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main(void) {
	{ // Sign grade too low
		std::cout << INVERT << "Sign Grade too low test (151)" << RESET << std::endl;
		try {
			Bureaucrat	signer("Signer", 1);
			std::cout << signer;
			Form		testForm("TestForm", 151, 12);
			std::cout << std::endl << YELLOW << testForm << RESET << std::endl;
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << RED << e.what() << RESET << std::endl << std::endl;
		}
	}
	{ // Sign grade too high
		std::cout << INVERT << "Sign Grade too high test (0)" << RESET << std::endl;
		try {
			Bureaucrat	signer("Signer", 1);
			std::cout << signer;
			Form		testForm("TestForm", 0, 12);
			std::cout << std::endl << YELLOW << testForm << RESET << std::endl;
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << RED << e.what() << RESET << std::endl << std::endl;
		}
	}
	{ // Execute grade too low
		std::cout << INVERT << "Execute Grade too low test (151)" << RESET << std::endl;
		try {
			Bureaucrat	signer("Signer", 1);
			std::cout << signer;
			Form		testForm("TestForm", 12, 151);
			std::cout << std::endl << YELLOW << testForm << RESET << std::endl;
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << RED << e.what() << RESET << std::endl << std::endl;
		}
	}
	{ // Execute grade too high
		std::cout << INVERT << "Execute Grade too high test (0)" << RESET << std::endl;
		try {
			Bureaucrat	signer("Signer", 1);
			std::cout << signer;
			Form		testForm("TestForm", 12, 0);
			std::cout << std::endl << YELLOW << testForm << RESET << std::endl;
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << RED << e.what() << RESET << std::endl << std::endl;
		}
	}
	{ // Bureaucrat Grade too low test
		std::cout << INVERT << "Bureaucrat Grade too low test" << RESET << std::endl;
		try {
			Bureaucrat	signer("Signer", 13);
			std::cout << signer;
			Form		testForm("TestForm", 12, 12);
			std::cout << std::endl << YELLOW << testForm << RESET << std::endl;
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << RED << e.what() << RESET << std::endl << std::endl;
		}
	}
	{ // sigForm() test
		std::cout << INVERT << "sigForm() test" << RESET << std::endl;
		try {
			Bureaucrat	signer("Signer", 12);
			std::cout << signer;
			Form		testForm("TestForm", 12, 12);
			std::cout << std::endl << YELLOW << testForm << RESET << std::endl;
			signer.signForm(testForm);
			std::cout << "Signed: " << (testForm.getIsSigned() == 1 ? "true" : "false") << std::endl;
		}
		catch (const std::exception& e){
			std::cout << RED << e.what() << RESET << std::endl << std::endl;
		}
	}
	{ // beSigned() test
		std::cout << std::endl << INVERT << "beSigned() test" << RESET << std::endl;
		try {
			Bureaucrat	signer("Signer", 12);
			std::cout << signer;
			Form		testForm("TestForm", 12, 12);
			std::cout << std::endl << YELLOW << testForm << RESET << std::endl;
			testForm.beSigned(signer);
			std::cout << "Signed: " << (testForm.getIsSigned() == 1 ? "true" : "false") << std::endl;
		}
		catch (const std::exception& e){
			std::cout << RED << e.what() << RESET << std::endl << std::endl;
		}
	}
}