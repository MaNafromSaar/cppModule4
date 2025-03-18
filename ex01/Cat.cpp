/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:24 by mnaumann          #+#    #+#             */
/*   Updated: 2025/03/18 16:00:15 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat") {
	_brain = new Brain();
	//std::cout << "Cat has been created" << std::endl;
}

Cat::~Cat() {
	delete _brain;
	//std::cout << "Cat has lost 9+ lives" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	this->_brain = new Brain(*src._brain);
	//std::cout << "Copycat" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	Animal::operator=(src);
	*_brain = *src._brain;
	//std::cout << "Copycat assignment called" << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat goes: Meow" << std::endl;
}

void Cat::printIdeas() const {
	_brain->printIdeas();
}