/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:20:21 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/18 14:07:10 by mnaumann         ###   ########.fr       */
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
		virtual std::string getType() const;
		void setType(std::string type);
		virtual void makeSound() const;
};

#endif