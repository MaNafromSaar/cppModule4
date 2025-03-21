/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:34 by mnaumann          #+#    #+#             */
/*   Updated: 2025/03/19 09:56:55 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Brain;

class Dog : public Animal {
    private:
        Brain *_brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        void makeSound() const override;
        void printIdeas() const;
};

class CatDog : public mutatedAnimal {
    public:
        CatDog();
        ~CatDog();
        CatDog(const CatDog &src);
        CatDog &operator=(const CatDog &src);
        void makeSound() const;
};

#endif
