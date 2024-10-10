/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:50:04 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/10 15:20:03 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called\n";
    this->_type = "Cat";
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Copy Cat constructor called\n";
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called\n";
}

Cat&	Cat::operator=(const Cat& copy)
{
	std::cout << "Cat assignment operator called\n";

    if (this != &copy)
		this->_type = copy._type;

	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "* Meow Meow *\n";
}