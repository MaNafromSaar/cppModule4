/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:28 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/18 13:37:14 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Brain;

class Cat : public Animal {
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &src);
		void makeSound() const;
		void printIdeas() const;
};

#endif
