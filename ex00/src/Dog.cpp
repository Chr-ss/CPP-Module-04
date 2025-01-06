/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 16:13:15 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Constructor
Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << BLUE << "Dog constructor for called." << RESET << std::endl;
}

// Copy Constructor
Dog::Dog(const Dog &toCopy) : Animal(toCopy)
{
	std::cout << BLUE << "Copy Constructor called." << RESET << std::endl;
}

// Copy Assignment Operator
Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << BLUE << "Copy Assignment Operator called." << RESET << std::endl;
	return (*this);
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