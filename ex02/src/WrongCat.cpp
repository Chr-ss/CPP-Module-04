/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 16:30:00 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

// Constructor
WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << BLUE << "WrongCat constructor for called." << RESET << std::endl;
}

// Copy Constructor
WrongCat::WrongCat(const WrongCat &toCopy) : WrongAnimal(toCopy)
{
	std::cout << BLUE << "Copy Constructor called." << RESET << std::endl;
}

// Copy Assignment Operator
WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	std::cout << BLUE << "Copy Assignment Operator called." << RESET << std::endl;
	return (*this);
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat destructor called." << RESET << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "\"*A wrong cat sound!*\"" << std::endl;
}