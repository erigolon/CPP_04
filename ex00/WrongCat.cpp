/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:32:31 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/10 15:35:13 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called\n";
    this->_type = "Cat?";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "Copy WrongCat constructor called\n";
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called\n";
}

WrongCat&	WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "WrongCat assignment operator called\n";

    if (this != &copy)
		this->_type = copy._type;

	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "* Meow Meow Madafaka *\n";
}