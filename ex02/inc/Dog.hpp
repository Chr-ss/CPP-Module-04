/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 16:15:42 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <cctype>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain*	_brain;
public:
	// Constructor
	Dog();
	// Destructor
	~Dog();

	// Copy Constructor
	Dog(const Dog &toCopy);
	// Copy assignment operator
	Dog& operator=(const Dog &other);

	//	Setters
	void	setIdea(unsigned int index, std::string idea);
	// Public functions
	void	makeSound() const;
	void	getIdeas() const;
};


#endif // DOG_HPP