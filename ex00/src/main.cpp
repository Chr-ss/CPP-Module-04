/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/01/03 13:48:20 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main(void)
{
	{
		std::cout << "\n\tTEST 1 (Animal construction/destruction chaining):" << std::endl;
		Animal animal1 = Animal();
	}
	{
		std::cout << "\n\tTEST 2 (Cat construction/destruction chaining):" << std::endl;
		Cat cat1 = Cat();
	}
	{
		std::cout << "\n\tTEST 3 (Dog construction/destruction chaining):" << std::endl;
		Dog dog1 = Dog();
	}
	{
		std::cout << "\n\tTEST 4 (Sounds):" << std::endl;
		Animal animal1 = Animal();
		Cat cat1 = Cat();
		Dog dog1 = Dog();

		animal1.makeSound();
		cat1.makeSound();
		dog1.makeSound();
	}
	{
		std::cout << "\n\tTEST 5 (Subject test):" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << i->getType() << " ";
		i->makeSound(); //will output the cat sound!
		std::cout << j->getType() << " ";
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
	}
	return (0);
}