/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/01/06 16:29:37 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include <cctype>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:
	std::string _type;
public:
	// Constructor
	WrongCat();
	// Destructor
	~WrongCat();

	// Copy Constructor
	WrongCat(const WrongCat &toCopy);
	// Copy assignment operator
	WrongCat& operator=(const WrongCat &other);

	// Public functions
	void	makeSound() const;
};


#endif // WrongCat_HPP