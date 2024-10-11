/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:47:53 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 12:17:31 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor called\n";
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Copy Brain constructor called\n";

	*this = copy;
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor called\n";
}

Brain&	Brain::operator=(const Brain& copy)
{
	std::cout << "Brain assignment operator called\n";

    if (this != &copy)
		*this->_ideas = *copy._ideas;

	return (*this);
}

void	Brain::setIdea(std::string idea, int i)
{
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
}

std::string*	Brain::getIdeas()
{
	return (this->_ideas);
}