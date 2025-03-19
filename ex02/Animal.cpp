/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:17 by mnaumann          #+#    #+#             */
/*   Updated: 2025/03/18 17:29:41 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal created via default" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal() {
	std::cout << "Hoeneß was here" << std::endl;
}

Animal::Animal(const Animal &src) {
	std::cout << "copied" << std::endl;
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


// WrongAnimal

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal created via default" << std::endl;
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

// mutatedAnimal

mutatedAnimal::mutatedAnimal() {
	std::cout << "mutatedAnimal created via default" << std::endl;
}

mutatedAnimal::mutatedAnimal(std::string type, std::string sound) : type(type), sound(sound) {
	std::cout << "mutatedAnimal created" << std::endl;
}

mutatedAnimal::~mutatedAnimal() {
	std::cout << "It's at a better place now" << std::endl;
}

mutatedAnimal::mutatedAnimal(const mutatedAnimal &src) {
	*this = src;
}

mutatedAnimal &mutatedAnimal::operator=(const mutatedAnimal &src) {
	std::cout << "mutatedAnimal assignment called" << std::endl;
	if (this == &src)
		return *this;
	this->type = src.type;
	this->sound = src.sound;
	return *this;
}

std::string mutatedAnimal::getType() const {
	return this->type;
}

void mutatedAnimal::setType(std::string type) {
	std::cout << "Type set to " << type << std::endl;
	this->type = type;
}

void mutatedAnimal::makeSound() const {
	std::cout << "mutatedAnimal, which absolutely is not CatDog goes " << this->sound << std::endl;
}
