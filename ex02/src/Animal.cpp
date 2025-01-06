/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 18:37:03 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Constructors
AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << BLUE << "AAnimal constructor called." << RESET << std::endl;
}

// Destructor
AAnimal::~AAnimal()
{
	std::cout << RED << "AAnimal destructor called." << RESET << std::endl;
}
std::string	AAnimal::getType() const
{
	return (_type);
}