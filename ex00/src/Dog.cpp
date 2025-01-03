/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 13:44:28 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Constructor
Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << BLUE << "Dog constructor for called." << RESET << std::endl;
}

// Destructor
Dog::~Dog()
{
	std::cout << RED << "Dog destructor called." << RESET << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "\"Woof!\"" << std::endl;
}