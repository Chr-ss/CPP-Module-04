/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 15:22:20 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Constructor
Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << BLUE << "Cat constructor for called." << RESET << std::endl;
}

// Copy Constructor
Cat::Cat(const Cat &toCopy) : Animal(toCopy)
{
	std::cout << BLUE << "Copy Constructor called." << RESET << std::endl;
}

// Copy Assignment Operator
Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << BLUE << "Copy Assignment Operator called." << RESET << std::endl;
	return (*this);
}

// Move Constructor
Cat::Cat(Cat&& other) noexcept : Animal(std::move(other))
{
	std::cout << BLUE << "Move Constructor called." << RESET << std::endl;
}

// Move Assignment Operator
Cat& Cat::operator=(Cat&& other) noexcept
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
Cat::~Cat()
{
	std::cout << RED << "Cat destructor called." << RESET << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "\"Meow!\"" << std::endl;
}