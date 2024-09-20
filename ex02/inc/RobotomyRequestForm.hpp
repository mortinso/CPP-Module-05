/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:11:51 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/20 16:17:46 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:

	public:
		// Constructors
		RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm &_robotomyrequestform );

		// Destructor
		~RobotomyRequestForm( void );

		// Copy assignment operator overload
		RobotomyRequestForm & operator = ( const RobotomyRequestForm &_robotomyrequestform );

		// Getters

		// Setters

		// Methods
};

#endif
