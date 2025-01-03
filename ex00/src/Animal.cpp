/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 13:45:23 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Constructor
Animal::Animal() : _type("Animal")
{
	std::cout << BLUE << "Animal constructor for called." << RESET << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << RED << "Animal destructor called." << RESET << std::endl;
}
std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal undecided.. *no sounds*" << std::endl;
}
