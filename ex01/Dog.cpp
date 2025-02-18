/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:32 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/18 14:04:19 by mnaumann         ###   ########.fr       */
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

void Dog::makeSound() const {
	std::cout << "Dog goes Woof" << std::endl;
}

void Dog::printIdeas() const {
	_brain->printIdeas();
}
