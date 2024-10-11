/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:38:42 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 12:30:12 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called\n";
	
	this->_type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Copy Dog constructor called\n";
	
	this->_brain = new Brain(*copy._brain);
	this->_type = copy._type;
}

Dog::~Dog()
{
	delete this->_brain;
	
	std::cout << "Default Dog destructor called\n";
}

Dog&	Dog::operator=(const Dog& copy)
{
	std::cout << "Dog assignment operator called\n";

    if (this != &copy)
	{
		delete this->_brain;
		this->_brain = new Brain(*copy._brain);
		
		this->_type = copy._type;
	}

	return (*this);
}

Brain*	Dog::getBrain()
{
	return (this->_brain);
}

void	Dog::makeSound() const
{
	std::cout << "* Woof Woof *\n";
}