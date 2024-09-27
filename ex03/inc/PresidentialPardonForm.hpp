/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:11:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/26 18:27:47 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
	const std::string	target;

	public:
		// Constructors
		PresidentialPardonForm( void );
		PresidentialPardonForm( const std::string _target );
		PresidentialPardonForm( const PresidentialPardonForm &_ppform );

		// Destructor
		~PresidentialPardonForm( void );

		// Copy assignment operator overload
		PresidentialPardonForm & operator = ( const PresidentialPardonForm &_ppform );

		// Methods
		void	execution( void ) const;
};

#endif
