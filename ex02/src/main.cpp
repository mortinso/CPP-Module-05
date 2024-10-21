/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:12:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/21 18:16:50 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int	main(void) {
	Bureaucrat crash("Crash Bandicoot", 1);
	Bureaucrat fake_crash("Fake Crash", 150);
	ShrubberyCreationForm sc_form("Cortex Island");
	RobotomyRequestForm rr_form("Aku Aku");
	PresidentialPardonForm pp_form("Doctor Neo Cortex");

	{ // Form Info
		std::cout << GREEN << "Form Info" << RESET << std::endl;
		std::cout << sc_form << std::endl;
		std::cout << rr_form << std::endl;
		std::cout << pp_form << std::endl;
	}
	{ // Failed Signing Test
		std::cout << std::endl << GREEN << "Failed Signing Test" << RESET << std::endl;
		try { fake_crash.signForm(sc_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }

		try { fake_crash.signForm(rr_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }

		try { fake_crash.signForm(pp_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Unsigned Execution Test
		std::cout << std::endl << GREEN << "Unsigned Execution Test" << RESET << std::endl;
		try { fake_crash.executeForm(sc_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }

		try { fake_crash.executeForm(rr_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }

		try { fake_crash.executeForm(pp_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Signing Test
		std::cout << std::endl << "---------------------------------------------" << std::endl;
		std::cout << GREEN << "Form Signing" << RESET << std::endl;
		try { crash.signForm(sc_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }

		try { crash.signForm(rr_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }

		try { crash.signForm(pp_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
		std::cout << "---------------------------------------------" << std::endl;
	}
	{ // Failed Execution Test
		std::cout << std::endl << GREEN << "Failed Execution Test" << RESET << std::endl;
		try { fake_crash.executeForm(sc_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }

		try { fake_crash.executeForm(rr_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }

		try { fake_crash.executeForm(pp_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Execution Test
		std::cout << std::endl << GREEN << "Execution Test" << RESET << std::endl;
		try { crash.executeForm(sc_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
		std::cout << std::endl;
		try { crash.executeForm(rr_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
		std::cout << std::endl;
		try { crash.executeForm(pp_form); }
		catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	}
	/* { // 50% chance Test
		for (int i = 0; i < 20; i++)
		{
			crash.executeForm(rr_form);
			std::cout << std::endl;
		}
	} */
}