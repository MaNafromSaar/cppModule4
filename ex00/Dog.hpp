/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:34 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/18 10:33:48 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		Dog(const Dog &src);
		void makeSound() const;
};

class CatDog : public mutatedAnimal {
	public:
		//std::string sound="Meowoof!";
		CatDog();
		~CatDog();
		CatDog(const CatDog &src);
		void makeSound() const;
};

#endif
