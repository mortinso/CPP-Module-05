/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:11:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/20 16:17:48 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:

	public:
		// Constructors
		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm &_presidentialpardonform );

		// Destructor
		~PresidentialPardonForm( void );

		// Copy assignment operator overload
		PresidentialPardonForm & operator = ( const PresidentialPardonForm &_presidentialpardonform );

		// Getters

		// Setters

		// Methods
};

#endif
