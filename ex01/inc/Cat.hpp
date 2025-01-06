/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 16:13:39 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <cctype>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
	Brain*	_brain;
public:
	// Constructor
	Cat();
	// Destructor
	~Cat();

	// Copy Constructor
	Cat(const Cat &toCopy);
	// Copy assignment operator
	Cat& operator=(const Cat &other);

	//	Setters
	void	setIdea(unsigned int index, std::string idea);
	// Public functions
	void	makeSound() const;
	void	getIdeas() const;
};


#endif // CAT_HPP