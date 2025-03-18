/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:34 by mnaumann          #+#    #+#             */
/*   Updated: 2025/03/18 15:13:50 by mnaumann         ###   ########.fr       */
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
		Dog &operator=(const Dog &src);
		void makeSound() const;
};

//uncomment this to see what happens if the sound is a variable
class CatDog : public mutatedAnimal {
	public:
		//std::string sound="Meowoof!";
		CatDog();
		~CatDog();
		CatDog(const CatDog &src);
		CatDog &operator=(const CatDog &src);
		void makeSound() const;
};

#endif
