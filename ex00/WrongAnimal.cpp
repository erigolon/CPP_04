/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:32:16 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/10 15:35:25 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("unknown?")
{
	std::cout << "Default WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
	std::cout << "Parametric WrongAnimal constructor for " << type <<" called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "Copy WrongAnimal constructor called\n";
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal assignment operator called\n";

    if (this != &copy)
		this->_type = copy._type;

	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "* Unknown WrongAnimal sound *\n";
}