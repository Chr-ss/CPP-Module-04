/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/01/03 15:17:20 by christian.r   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main(void)
{
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 1 (Animal construction/destruction chaining):" << RESET << std::endl;
		Animal animal1 = Animal();
	}
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 2 (Cat construction/destruction chaining):" << RESET << std::endl;
		Cat cat1 = Cat();
	}
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 3 (Dog construction/destruction chaining):" << RESET << std::endl;
		Dog dog1 = Dog();
	}
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 4 (Sounds):" << RESET << std::endl;
		Animal animal1 = Animal();
		Cat cat1 = Cat();
		Dog dog1 = Dog();

		animal1.makeSound();
		cat1.makeSound();
		dog1.makeSound();
	}
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 5 (Subject test):" << RESET << std::endl;
		const Animal* animals = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << i->getType() << " ";
		i->makeSound(); //will output the cat sound!
		std::cout << j->getType() << " ";
		j->makeSound();
		animals->makeSound();
		std::cout << std::endl;
	}
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 6 (Subject test ex01):" << RESET << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 6 (Subject test ex01):" << RESET << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 7 (Subject ex01 array test):" << RESET << std::endl;
		const Animal	*animals[10];
		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
		{
			std::cout << i << ": Animal type: " << animals[i]->getType() << " : ";
			animals[i]->makeSound();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
			delete(animals[i]);
	}
	{
	std::cout << BOLD << UNDERLINE << "\n\tTEST 8 (deep dopy test):" << RESET << std::endl;
	Dog *a = new Dog();

	a->setIdea(0, "I have to sniff it");
	a->setIdea(1, "I have to pee on it");
	a->setIdea(2, "I have to sniff it again");
	a->setIdea(3, "I have to pee on it again");
	a->setIdea(101, "this is not possible");

	Dog *b = new Dog(*a);
	
	std::cout << "\tThe " << a->getType() << " a has the following ideas: " << std::endl;
	a->getIdeas();
	delete(a);
	std::cout << std::endl;

	std::cout << "\tThe " << b->getType() << " b has the following ideas: " << std::endl;
	b->getIdeas();
	delete(b);
	}
}
