/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 13:09:11 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

// Constructor
Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
	std::cout << BLUE << "Brain constructor for called." << RESET << std::endl;
}

// Destructor
Brain::~Brain()
{
	std::cout << RED << "Brain destructor called." << RESET << std::endl;
}

void	Brain::getIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		if (ideas[i] != "")
			std::cout << "Idea " << i + 1 << ": " << ideas[i] << std::endl;
	}
}

void	Brain::setIdea(unsigned int index, std::string idea)
{
	if (index > 99)
	{
		std::cout << RED << "Index out of bounds." << RESET << std::endl;
		return ;
	}
	ideas[index] = idea;
}