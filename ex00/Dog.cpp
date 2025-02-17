/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:32 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/17 17:19:45 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog has been created" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog has passed" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << "Doggydog" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Dog goes Woof" << std::endl;
}