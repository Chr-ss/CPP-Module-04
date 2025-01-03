/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/03 13:45:40 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <cctype>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal {
public:
	// Constructor
	Cat();
	// Destructor
	~Cat();

	// Copy Constructor
	Cat(const Cat &toCopy) = default;
	// Copy assignment operator
	Cat& operator=(const Cat &other) = default;
	// Move Constructor
	Cat(Cat&& other) noexcept = default;
	// Move Assignment Operator
	Cat& operator=(Cat&& other) noexcept = default;

	// Public functions
	void	makeSound() const;
};


#endif // CAT_HPP