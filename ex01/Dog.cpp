/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:32 by mnaumann          #+#    #+#             */
/*   Updated: 2025/03/18 15:59:56 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
	_brain = new Brain();
	//std::cout << "Dog has been created" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	//std::cout << "Dog has passed" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	_brain = new Brain(*src._brain);
	//std::cout << "Doggydog" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	Animal::operator=(src);
	*_brain = *src._brain;
	//std::cout << "Doggydog assignment called" << std::endl;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Dog goes Woof" << std::endl;
}

void Dog::printIdeas() const {
	_brain->printIdeas();
}
