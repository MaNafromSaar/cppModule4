/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:17 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/17 17:19:00 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal() {
	std::cout << "Hoeneß was here" << std::endl;
}

Animal::Animal(const Animal &src) {
	*this = src;
}

Animal &Animal::operator=(const Animal &src) {
	std::cout << "Animal assignment called" << std::endl;
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::setType(std::string type) {
	std::cout << "Type set to " << type << std::endl;
	this->type = type;
}

void Animal::makeSound() const {
	std::cout << "Animal goes: UUUARRRGHH!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Hoeneß was here" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
	std::cout << "WrongAnimal assignment called" << std::endl;
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::setType(std::string type) {
	std::cout << "Type set to " << type << std::endl;
	this->type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "PseudoAnimal goes UUUARRRGGH!" << std::endl;
}
