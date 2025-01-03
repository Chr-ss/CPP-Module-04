/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 13:45:40 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <cctype>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal {
public:
	// Constructor
	Dog();
	// Destructor
	~Dog();

	// Copy Constructor
	Dog(const Dog &toCopy) = default;
	// Copy assignment operator
	Dog& operator=(const Dog &other) = default;
	// Move Constructor
	Dog(Dog&& other) noexcept = default;
	// Move Assignment Operator
	Dog& operator=(Dog&& other) noexcept = default;

	// Public functions
	void	makeSound() const;
};


#endif // DOG_HPP