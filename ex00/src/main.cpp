/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/01/06 16:32:27 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

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
		std::cout << "\n\tTEST 5 (default test):" << std::endl;
		Animal animal = Animal();

		animal.makeSound();
		std::cout << std::endl;
	}
	{
		std::cout << "\n\tTEST 6 (Subject test):" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << i->getType() << " ";
		i->makeSound(); //will output the cat sound!
		std::cout << j->getType() << " ";
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;

		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << "\n\tTEST 7 (Subject test (WrongCat)):" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " ";
		i->makeSound();
		std::cout << meta->getType() << " ";
		meta->makeSound();
		std::cout << std::endl;

		delete meta;
		delete i;
	}
	{
		std::cout << "\n\tTEST 8 (Operators):" << std::endl;
		Cat cat1 = Cat();
		Dog dog1 = Dog();

		cat1.makeSound();
		dog1.makeSound();

		std::cout << "\tCopy constructor:" << std::endl;
		// Animal operators3(dog1)
		Dog operators1(dog1);
		std::cout << operators1.getType() << ": ";
		operators1.makeSound();
		std::cout << std::endl;

		std::cout << "\tCopy assignment operator:" << std::endl;
		Cat operators2;
		operators2 = cat1;
		std::cout << operators2.getType() << ": ";
		operators2.makeSound();
		std::cout << std::endl;
	}
	return (0);
}