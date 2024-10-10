/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:38:42 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/10 15:20:02 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called\n";
	this->_type = "Dog";
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Copy Dog constructor called\n";
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called\n";
}

Dog&	Dog::operator=(const Dog& copy)
{
	std::cout << "Dog assignment operator called\n";

    if (this != &copy)
		this->_type = copy._type;

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "* Woof Woof *\n";
}