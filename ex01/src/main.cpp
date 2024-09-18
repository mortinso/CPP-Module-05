/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:12:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/18 19:27:13 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

void	routine(std::string name, int grade) {
	try {
		std::cout << "Original: ";
		Bureaucrat guy(name, grade);
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
}