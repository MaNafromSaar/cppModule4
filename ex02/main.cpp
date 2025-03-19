/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:10:05 by mnaumann          #+#    #+#             */
/*   Updated: 2025/03/19 09:02:33 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//uncomment to test for instantiation of abstract class
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new WrongCat();
	const mutatedAnimal* mutated = new CatDog();
	const mutatedAnimal* mutatedmeta = new mutatedAnimal();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	//meta->makeSound();

	//delete meta;
	delete j;
	delete i;

	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();

	delete wrong;

	std::cout << mutated->getType() << " " << std::endl;
	mutated->makeSound();
	std::cout << mutatedmeta->getType() << " " << std::endl;
	mutatedmeta->makeSound();

	delete mutated;
	delete mutatedmeta;

	return 0;
}
