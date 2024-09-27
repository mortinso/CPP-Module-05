/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:12:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/27 17:39:08 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/Intern.hpp"

void	routine( AForm &form ) {
	Bureaucrat	ceo("CEO", 1);
	try {
		ceo.signForm(form);
		ceo.executeForm(form);
	}
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }
}

int	main( void ) {
	Intern	dude;
	AForm	*shrub;
	AForm	*robot;
	AForm	*presi;
	AForm	*peace;

	{ // Shruberry Creation
		std::cout << GREEN << "shrubbery creation" << RESET << std::endl;
		try {
			shrub = dude.makeForm("shrubbery creation", "Theed Palace");
			routine(*shrub);
			delete shrub;
		}
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Robotomy Request
		std::cout << std::endl << GREEN << "ROBOTOMY REQUEST" << RESET << std::endl;
		try {
			robot = dude.makeForm("ROBOTOMY REQUEST", "Twi'lek");
			routine(*robot);
			delete robot;
		}
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Presidential Pardon
		std::cout << std::endl << GREEN << "PrEsIdEnTiAl PaRdOn" << RESET << std::endl;
		try {
			presi = dude.makeForm("PrEsIdEnTiAl PaRdOn", "Palpatine");
			routine(*presi);
			delete presi;
		}
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Non Existant Form
		std::cout << std::endl << GREEN << "Peace Treaty" << RESET << std::endl;
		try {
			peace = dude.makeForm("Peace Treaty", "New Republic");
			routine(*peace);
			delete peace;
		}
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	}
}