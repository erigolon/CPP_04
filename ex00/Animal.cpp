/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:35:29 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/10 15:20:07 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Animal.hpp"

Animal::Animal(void) : _type("unknown")
{
	std::cout << "Default Animal constructor called\n";
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Parametric Animal constructor for " << type <<" called\n";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Copy Animal constructor called\n";
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called\n";
}

Animal&	Animal::operator=(const Animal& copy)
{
	std::cout << "Animal assignment operator called\n";

    if (this != &copy)
		this->_type = copy._type;

	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void		Animal::makeSound() const
{
	std::cout << "* Unknown animal sound *\n";
}