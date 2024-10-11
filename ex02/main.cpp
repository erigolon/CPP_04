/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:35:00 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 12:04:21 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/AAnimal.hpp"
#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"

int	main()
{
	// Dosen't work, because Animal is abstract
	//AAnimal	ani = AAnimal();
	//ani.makeSound();

	AAnimal	*cat = new Cat();
	cat->makeSound();

    Dog dog;
    dog.makeSound();

	// Dosen't work, because Animal is abstract
	//AAnimal	dog = Dog();
	//dog.makeSound();

	delete cat;
    
    return (0);
}