/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:11:51 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/26 18:27:39 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cmath>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		const std::string	target;

	public:
		// Constructors
		RobotomyRequestForm( void );
		RobotomyRequestForm( const std::string _target );
		RobotomyRequestForm( const RobotomyRequestForm &_rrform );

		// Destructor
		~RobotomyRequestForm( void );

		// Copy assignment operator overload
		RobotomyRequestForm & operator = ( const RobotomyRequestForm &_rrform );

		// Methods
		void	execution( void ) const;
};

#endif
