/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:17 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/18 14:11:20 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type) : type(type) {
	//std::cout << "Animal created" << std::endl;
}

Animal::~Animal() {
	//std::cout << "Hoeneß was here" << std::endl;
}

Animal::Animal(const Animal &src) {
	*this = src;
}

Animal &Animal::operator=(const Animal &src) {
	//std::cout << "Animal assignment called" << std::endl;
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::setType(std::string type) {
	//std::cout << "Type set to " << type << std::endl;
	this->type = type;
}

void Animal::makeSound() const {
	std::cout << "Animal goes: UUUARRRGHH!" << std::endl;
}
