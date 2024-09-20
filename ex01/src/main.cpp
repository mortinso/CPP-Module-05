/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:12:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/20 15:30:44 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main(void) {
	{ std::cout << "Sign Grade too low test" << std::endl;
		try {
			Bureaucrat	signer("Signer", 1);
			Form		testForm("TestForm", 151, 12);
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << e.what() << std::endl << std::endl;
		}
	}
	{ std::cout << std::endl << "Sign Grade too high test" << std::endl;
		try {
			Bureaucrat	signer("Signer", 1);
			Form		testForm("TestForm", 0, 12);
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << e.what() << std::endl << std::endl;
		}
	}
	{ std::cout << std::endl << "Execute Grade too low test" << std::endl;
		try {
			Bureaucrat	signer("Signer", 1);
			Form		testForm("TestForm", 12, 151);
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << e.what() << std::endl << std::endl;
		}
	}
	{ std::cout << std::endl << "Execute Grade too high test" << std::endl;
		try {
			Bureaucrat	signer("Signer", 1);
			Form		testForm("TestForm", 12, 0);
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << e.what() << std::endl << std::endl;
		}
	}
	{ std::cout << std::endl << "Bureaucrat Grade too low test" << std::endl;
		try {
			Bureaucrat	signer("Signer", 13);
			Form		testForm("TestForm", 12, 12);
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << e.what() << std::endl << std::endl;
		}
	}
	{ std::cout << std::endl << "Signing test" << std::endl;
		try {
			Bureaucrat	signer("Signer", 11);
			Form		testForm("TestForm", 12, 12);
			signer.signForm(testForm);
		}
		catch (const std::exception& e){
			std::cout << e.what() << std::endl << std::endl;
		}
	}
}