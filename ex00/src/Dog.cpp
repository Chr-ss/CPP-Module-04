/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 15:22:20 by crasche       ########   odam.nl         */
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

// Move Constructor
Dog::Dog(Dog&& other) noexcept : Animal(std::move(other))
{
	std::cout << BLUE << "Move Constructor called." << RESET << std::endl;
}

// Move Assignment Operator
Dog& Dog::operator=(Dog&& other) noexcept
{
	if (this != &other)
	{
		_type = std::move(other._type);
	}
	other._type = "";
	std::cout << BLUE << "Move Assignment Operator called." << RESET << std::endl;
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