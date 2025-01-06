/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 16:12:17 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <cctype>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal {
private:

public:
	// Constructor
	Cat();
	// Destructor
	~Cat();

	// Copy Constructor
	Cat(const Cat &toCopy);
	// Copy assignment operator
	Cat& operator=(const Cat &other);

	// Public functions
	void	makeSound() const;
};


#endif // CAT_HPP