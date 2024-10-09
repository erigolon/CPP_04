/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:35:29 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/09 13:03:36 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called\n";

	this->_type = "unknown";
}

Animal::Animal(const std::string type)
{
	std::cout << "Parametric Animal constructor for " << type <<" called\n";

	this->_type = type;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called\n";
}

Animal&	Animal::operator=(const Animal& copy)
{
	std::cout << "Animal assignment operator called" << std::endl;

    if (this != &copy)
		this->_type = copy._type;

	return (*this);
}