/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:35:29 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 11:44:02 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/AAnimal.hpp"

AAnimal::AAnimal(void) : _type("unknown")
{
	std::cout << "Default AAnimal constructor called\n";
}

AAnimal::AAnimal(const std::string type) : _type(type)
{
	std::cout << "Parametric AAnimal constructor for " << type <<" called\n";
}

AAnimal::AAnimal(const AAnimal& copy)
{
	std::cout << "Copy AAnimal constructor called\n";
	*this = copy;
}

AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal destructor called\n";
}

AAnimal&	AAnimal::operator=(const AAnimal& copy)
{
	std::cout << "AAnimal assignment operator called\n";

    if (this != &copy)
		this->_type = copy._type;

	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}