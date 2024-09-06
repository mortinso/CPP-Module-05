/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:12:26 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/06 15:47:20 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define BOLD "\e[1m"
# define ITALIC "\e[3m"
# define UNDERLINE "\e[4m"
# define RED "\e[91m"
# define GREEN "\e[92m"
# define YELLOW "\e[93m"
# define BLUE "\e[94m"
# define PURPLE "\e[95m"
# define CYAN "\e[96m"
# define INVERT "\e[90m\e[107m"
# define RESET "\e[0m"

class Bureaucrat {
	private:
	const std::string	name;
	int					grade;

	public:
		// Constructors
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat &bureaucrat );

		// Destructor
		~Bureaucrat( void );

		// Copy assignment operator overload
		Bureaucrat & operator = ( const Bureaucrat &bureaucrat );

		std::ostream & operator << (const Bureaucrat &bureaucrat);

		// Getters
		const std::string	getName( void );
		int					getGrade( void );

		// Setters

		// Methods
		void	incrementGrade( void );
		void	decrementGrade( void );
};

#endif
