/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 13:44:28 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Constructor
Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << BLUE << "Cat constructor for called." << RESET << std::endl;
}

// Destructor
Cat::~Cat()
{
	std::cout << RED << "Cat destructor called." << RESET << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "\"Meow!\"" << std::endl;
}