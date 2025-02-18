/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:21 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/18 14:59:39 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal(std::string type = "Animal");
		virtual ~Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		std::string getType() const;
		void setType(std::string type);
		virtual void makeSound() const = 0; //THIS 0 makes it uninstantiable
};

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal(std::string type = "WrongAnimal");
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &src);
		std::string getType() const;
		void setType(std::string type);
		void makeSound() const;
};

class mutatedAnimal {
	protected:
		std::string type;
	public:
		// here we test what happens if the sound is a variable
		std::string sound;
		mutatedAnimal(std::string type = "mutatedAnimal", 
			std::string sound = "UUUARRRGHH!");
		~mutatedAnimal();
		mutatedAnimal(const mutatedAnimal &src);
		mutatedAnimal &operator=(const mutatedAnimal &src);
		std::string getType() const;
		void setType(std::string type);
		void makeSound() const;
};

#endif
