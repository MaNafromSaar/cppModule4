/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:32 by mnaumann          #+#    #+#             */
/*   Updated: 2025/03/19 09:57:09 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog has been created via default" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog has passed" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
    std::cout << "Doggydog" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
    if (this == &src)
        return *this;
    this->type = src.type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog goes Woof" << std::endl;
}

void Dog::printIdeas() const {
	_brain->printIdeas();
}

// The sound variable gets overwritten now, still the wrong
// function is called in the main.cpp
CatDog::CatDog() : mutatedAnimal("CatDog") {
    std::cout << "CatDog has been created via default" << std::endl;
}

CatDog::~CatDog() {
    std::cout << "CatDog kicked the bucket" << std::endl;
}

CatDog::CatDog(const CatDog &src) : mutatedAnimal(src) {
    std::cout << "Copycat" << std::endl;
}

CatDog &CatDog::operator=(const CatDog &src) {
    if (this == &src)
        return *this;
    this->type = src.type;
    this->sound = src.sound;
    return *this;
}

void CatDog::makeSound() const {
	std::cout << "CatDog goes" << this->sound << std::endl;
}
