/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:12:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/21 16:19:28 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

void	routine(std::string name, int grade) {
	try {
		std::cout << INVERT << name << ", grade " << grade << RESET << std::endl;
		std::cout << "Original: ";
		Bureaucrat	guy(name, grade);
		std::cout << guy;
		std::cout << "Lower: ";
		guy.decrementGrade();
		std::cout << guy;
		std::cout << "Higher: ";
		guy.incrementGrade();
		guy.incrementGrade();
		std::cout << guy << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl << std::endl;
	}
}

int main(void) {
	routine("Mr. President", 0);
	routine("Prime Minister", 1);
	routine("Random Minister", 100);
	routine("Secretary", 149);
	routine("Janitor", 150);
	routine("You", 151);
	{ // Testing Getters
		std::cout << INVERT << "Testing Getters" << RESET << std::endl;
		Bureaucrat	guy("Bob", 51);

		std::cout << "Name: " << guy.getName() << std::endl;
		std::cout << "Grade: " << guy.getGrade() << std::endl;
	}
}