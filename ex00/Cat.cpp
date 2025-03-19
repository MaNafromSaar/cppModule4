/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:24 by mnaumann          #+#    #+#             */
/*   Updated: 2025/03/19 08:31:43 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat has been created" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat has lost 9+ lives" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << "Copycat" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Copycat assignment called" << std::endl;
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat goes: Meow" << std::endl;
}

// WrongCat
WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat has been created" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat has lost 9+ lives" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
	std::cout << "Copycat" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
	std::cout << "Copycat assignment called" << std::endl;
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat goes Meow"<< std::endl;
}
