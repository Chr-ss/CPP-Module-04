/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 17:07:14 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Constructor
Dog::Dog() : Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << BLUE << "Dog constructor for called." << RESET << std::endl;
}

Dog::Dog(const Dog &toCopy)
{
	_type = toCopy._type;
	_brain = new Brain(*toCopy._brain);
	std::cout << BLUE << "Dog copy constructor called." << RESET << std::endl;
}

// Copy assignment operator
Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << BLUE << "Dog copy assignment operator called." << RESET << std::endl;
	return (*this);
}

// Destructor
Dog::~Dog()
{
	delete _brain;
	std::cout << RED << "Dog destructor called." << RESET << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "\"Woof!\"" << std::endl;
}

void	Dog::getIdeas() const
{
	_brain->getIdeas();
}

void	Dog::setIdea(unsigned int index, std::string idea)
{
	_brain->setIdea(index, idea);
}