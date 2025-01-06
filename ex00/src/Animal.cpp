/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 15:22:20 by crasche       ########   odam.nl         */
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

// Copy Constructor
Animal::Animal(const Animal &toCopy) : _type(toCopy._type)
{
	std::cout << BLUE << "Copy Constructor called." << RESET << std::endl;
}

// Copy Assignment Operator
Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << BLUE << "Copy Assignment Operator called." << RESET << std::endl;
	return (*this);
}

// Move Constructor
Animal::Animal(Animal&& other) noexcept : _type(other._type)
{
	other._type = "";
	std::cout << BLUE << "Move Constructor called." << RESET << std::endl;
}

// Move Assignment Operator
Animal& Animal::operator=(Animal&& other) noexcept
{
	if (this != &other)
	{
		_type = std::move(other._type);
	}
	other._type = "";
	std::cout << BLUE << "Move Assignment Operator called." << RESET << std::endl;
	return (*this);
}

// Getter
std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << _type << " undecided.. *no sounds*" << std::endl;
}