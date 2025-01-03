/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 19:06:14 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Constructor
Dog::Dog() : AAnimal()
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