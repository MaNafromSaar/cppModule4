/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:10:05 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/18 14:21:49 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::srand(static_cast<unsigned>(time(nullptr)));
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "It's a" << j->getType() << std::endl;
    dynamic_cast<const Dog*>(j)->printIdeas();
	std::cout << "It's a" << i->getType() << std::endl;
    dynamic_cast<const Cat*>(i)->printIdeas();

	delete j;
	delete i;

	const int zooSize = 100;
	Animal* zoo[zooSize];
	for (int i = 0; i < 50; i++)
		zoo[i] = new Dog();
	for (int i = 50; i < zooSize; i++)
		zoo[i] = new Cat();
	
	std::cout << "It's a" << zoo[0]->getType() << std::endl;
	dynamic_cast<const Dog*>(zoo[0])->printIdeas();
	std::cout << "It's a" << zoo[50]->getType() << std::endl;
	dynamic_cast<const Cat*>(zoo[50])->printIdeas();
	std::cout << "It's a" << zoo[42]->getType() << std::endl;
	dynamic_cast<const Dog*>(zoo[42])->printIdeas();

	for (int i = 0; i < zooSize; i++)
		delete zoo[i];

	return 0;
}
