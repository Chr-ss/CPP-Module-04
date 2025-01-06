/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 16:30:42 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

// Constructor
WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << BLUE << "WrongAnimal constructor for called." << RESET << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal destructor called." << RESET << std::endl;
}

// Copy Constructor
WrongAnimal::WrongAnimal(const WrongAnimal &toCopy) : _type(toCopy._type)
{
	std::cout << BLUE << "Copy Constructor called." << RESET << std::endl;
}

// Copy Assignment Operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << BLUE << "Copy Assignment Operator called." << RESET << std::endl;
	return (*this);
}

// Getter
std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "\"*WrongAnimal sounds*\"" << std::endl;
}