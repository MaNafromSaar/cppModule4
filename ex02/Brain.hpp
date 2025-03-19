/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:43:14 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/18 12:28:51 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

class Brain {
	private:
		std::string _ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const;
		void printIdeas() const;
};

#endif
