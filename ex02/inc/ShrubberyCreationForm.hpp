/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:11:57 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/26 18:27:30 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

// https://ascii.co.uk/art/tree

class ShrubberyCreationForm : public AForm {
	private:
		const std::string	target;

	public:
		// Constructors
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const std::string _target );
		ShrubberyCreationForm( const ShrubberyCreationForm &_scform );

		// Destructor
		~ShrubberyCreationForm( void );

		// Copy assignment operator overload
		ShrubberyCreationForm & operator = ( const ShrubberyCreationForm &_scform );

		// Methods
		void	execution( void ) const;
};

#endif
