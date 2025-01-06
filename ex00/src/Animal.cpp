/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 10:12:14 by christian.r   ########   odam.nl         */
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
	std::cout << _type << " undecided.. *no sounds*" << std::endl;
}

// Move Constructor
Animal::Animal(Animal&& other) : _type(other._type)
{
	other._type = "NULL";
	std::cout << "Move Constructor called\n";
}

// Move Assignment Operator
Animal& Animal::operator=(Animal&& other)
{
	if (this != &other)
	{
		_type = std::move(other._type);
	}
	std::cout << "Move Assignment Operator called\n";
	return (*this);
}