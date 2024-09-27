/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:12:28 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/27 15:46:58 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137), target("target") {
	// std::cout << "ShrubberyCreationForm default constructor called" <<std::endl;
}

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm( std::string _target ) : AForm("ShrubberyCreationForm", 145, 137), target(_target) {
	// std::cout << "ShrubberyCreationForm constructor called" <<std::endl;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &_scform ) : AForm(_scform.getName(), 145, 137), target(_scform.target) {
	// std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	// std::cout << "ShrubberyCreationForm destructor called" <<std::endl;
}

// Copy assignment operator overload
ShrubberyCreationForm& ShrubberyCreationForm::operator = ( const ShrubberyCreationForm &_scform ) {
	// std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this != &_scform) {
		*this = _scform;
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	ShrubberyCreationForm::execution( void ) const {
	std::string fileName = this->target + "_shrubbery";
	std::ofstream targetFile(fileName.c_str());
	if (!targetFile.is_open())
	{
		std::cout << "Open file error\n";
		return ;
	}

	// Tree 1
	targetFile << "                                              .\n                                   .         ;\n";
	targetFile << "      .              .              ;%     ;;\n        ,           ,                :;%  %;\n";
	targetFile << "         :         ;                   :;%;'     .,\n,.        %;     %;            ;        %;'    ,;\n";
	targetFile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n";
	targetFile << "    ;%;      %;        ;%;        % ;%;  ,%;'\n     `%;.     ;%;     %;'         `;%%;.%;'\n";
	targetFile << "      `:;%.    ;%%. %@;        %; ;@%;%'\n         `:%;.  :;bd%;          %;@%;'\n           `@%:.  :;%.         ;@@%;'\n";
	targetFile << "             `@%.  `;@%.      ;@@%;\n               `@%%. `@%%    ;@@%;\n                 ;@%. :@%%  %@@%;\n";
	targetFile << "                   %@bd%%%bd%%:;\n                     #@%%%%%:;;\n                     %@@%%%::;\n";
	targetFile << "                     %@@@%(o);  . '\n                     %@@@o%;:(.,'\n                 `.. %@@@o%::;\n";
	targetFile << "                    `)@@@o%::;\n                     %@@(o)::;\n                    .%@@@@%::;\n";
	targetFile << "                    ;%@@@@%::;.\n                   ;%@@@@%%:;;;.\n               ...;%@@@@@%%:;;;;,..\n";
	targetFile << std::endl << std::endl;

	// Tree 2
	targetFile << "          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n";
	targetFile << "   &() &\\/&|()|/&\\/ \'%\" & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n";
	targetFile << " ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n";
	targetFile << "             |||\n       , -=-~  .-^- _\n";
	targetFile << std::endl << std::endl;

	// Trees 3
	targetFile << "            ,@@@@@@@,\n    ,,,.   ,@@@@@@/@@,  .oo8888o.\n ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	targetFile << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
	targetFile << "`&%\\ ` /%&'    |.|        \\ '|8'\n    |o|        | |         | |\n    |.|        | |         | |\n";
	targetFile << " \\\\/ ._\\//_/__/  ,\\\\_//__\\\\/.  \\_//__/_\n";

	targetFile.close();
}
