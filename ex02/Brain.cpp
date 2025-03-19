/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:42:25 by mnaumann          #+#    #+#             */
/*   Updated: 2025/02/18 14:07:52 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

static const std::string g_verbs[] = {
   "run","jump","fly","eat","drink","sleep","think","code","play","sing", "poop"
};

Brain::Brain() {
   //std::cout << "Brain created" << std::endl;
   // Fill each idea with a random verb from g_verbs
   for (int i = 0; i < 100; i++) {
      _ideas[i] = g_verbs[std::rand() % (sizeof(g_verbs)/sizeof(std::string))];
   }
}

Brain::~Brain() {
   //std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain &src) {
   //std::cout << "Brain copied" << std::endl;
   for (int i = 0; i < 100; i++) {
      _ideas[i] = src._ideas[i];
   }
}

Brain &Brain::operator=(const Brain &src) {
   //std::cout << "Brain assigned" << std::endl;
   for (int i = 0; i < 100; i++) {
      _ideas[i] = src._ideas[i];
   }
   return *this;
}

void Brain::setIdea(int index, std::string idea) {
   _ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
   return _ideas[index];
}

void Brain::printIdeas() const {
   std::cout << "This is on your pet's mind:" << std::endl;
   for (int i = 0; i < 5; i++) {
      std::cout << _ideas[i] << std::endl;
   }
}
