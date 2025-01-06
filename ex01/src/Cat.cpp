/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 17:07:16 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Constructor
Cat::Cat() : Animal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << BLUE << "Cat constructor for called." << RESET << std::endl;
}
Cat::Cat(const Cat &toCopy)
{
	_type = toCopy._type;
	_brain = new Brain(*toCopy._brain);
	std::cout << BLUE << "Cat copy constructor called." << RESET << std::endl;
}

// Copy assignment operator
Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		_type = other._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << BLUE << "Cat copy assignment operator called." << RESET << std::endl;
	return (*this);
}

// Destructor
Cat::~Cat()
{
	delete _brain;
	std::cout << RED << "Cat destructor called." << RESET << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "\"Meow!\"" << std::endl;
}

void	Cat::getIdeas() const
{
	_brain->getIdeas();
}

void	Cat::setIdea(unsigned int index, std::string idea)
{
	_brain->setIdea(index, idea);
}