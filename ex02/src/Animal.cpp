/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:18 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 19:02:55 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Destructor
AAnimal::~AAnimal()
{
	std::cout << RED << "AAnimal destructor called." << RESET << std::endl;
}
std::string	AAnimal::getType() const
{
	return (_type);
}