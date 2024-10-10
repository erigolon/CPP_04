/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:35:00 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/10 15:35:58 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Animal.hpp"
#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"
#include "./includes/WrongAnimal.hpp"
#include "./includes/WrongCat.hpp"

int	main()
{
	const Animal* meta	= new Animal();
	const Animal* j 	= new Dog();
	const Animal* i 	= new Cat();

	std::cout << "Dog Type: " << j->getType() << " " << std::endl;
	std::cout << "Cat Type: " << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "_______________________________" << std::endl;

	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "Wrong Animal Type: " << wrong->getType() << " " << std::endl;
	std::cout << "Wrong Cat Type: " << wrongCat->getType() << " " << std::endl;
	wrong->makeSound();
	wrongCat->makeSound();


	std::cout << "_______________________________" << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wrong;
	delete wrongCat;
	return (0);
}