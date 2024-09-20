/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:11:57 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/20 16:17:40 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:

	public:
		// Constructors
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm &_shrubberycreationform );

		// Destructor
		~ShrubberyCreationForm( void );

		// Copy assignment operator overload
		ShrubberyCreationForm & operator = ( const ShrubberyCreationForm &_shrubberycreationform );

		// Getters

		// Setters

		// Methods
};

#endif
