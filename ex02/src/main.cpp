/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/01/06 18:31:40 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Dog.hpp"

int main(void)
{
	// {
	// 	std::cout << BOLD << UNDERLINE << "\n\tTEST 1 (AAnimal construction/destruction chaining):" << RESET << std::endl;
	// 	AAnimal AAnimal1 = AAnimal();
	// }
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
		// AAnimal AAnimal1 = AAnimal();
		Cat cat1 = Cat();
		Dog dog1 = Dog();

		// AAnimal1.makeSound();
		cat1.makeSound();
		dog1.makeSound();
	}
	// {
	// 	std::cout << "\n\tTEST 5 (default test):" << std::endl;
	// 	AAnimal AAnimal = AAnimal();

	// 	AAnimal.makeSound();
	// 	std::cout << std::endl;
	// }
	{
		std::cout << "\n\tTEST 6 (Subject test ex00):" << std::endl;
		// const AAnimal* meta = new AAnimal();
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		std::cout << i->getType() << " ";
		i->makeSound(); //will output the cat sound!
		std::cout << j->getType() << " ";
		j->makeSound();
		// meta->makeSound();
		std::cout << std::endl;

		// delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 7 (Subject test ex01):" << RESET << std::endl;
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		delete j;//should not create a leak
		delete i;//should not create a leak
	}
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 8 (Subject ex01 array test):" << RESET << std::endl;
		const AAnimal	*AAnimals[10];
		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				AAnimals[i] = new Cat();
			else
				AAnimals[i] = new Dog();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
		{
			std::cout << i << ": AAnimal type: " << AAnimals[i]->getType() << " : ";
			AAnimals[i]->makeSound();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
			delete(AAnimals[i]);
	}
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 9 (deep dopy test):" << RESET << std::endl;
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
	{
		std::cout << BOLD << UNDERLINE << "\n\tTEST 10 (Subject test (WrongCat)):" << RESET << std::endl;
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
		std::cout << BOLD << UNDERLINE << "\n\tTEST 11 (Operators):" << RESET << std::endl;
		Cat cat1 = Cat();
		Dog dog1 = Dog();

		cat1.makeSound();
		dog1.makeSound();

		std::cout << "\tCopy constructor:" << std::endl;
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
}
