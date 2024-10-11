/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:35:00 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 12:21:44 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Animal.hpp"
#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"

int	main()
{
	const int ARRAY_SIZE = 6;
    Animal* animals[ARRAY_SIZE];

    // Llenar mitad del array con Dogs y la otra mitad con Cats
    for (int i = 0; i < ARRAY_SIZE / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; ++i) {
        animals[i] = new Cat();
    }

    // Prueba de copia profunda "DOG"
    std::cout << "\nTesting deep copy:\n";
    Dog originalDog;
    Dog copiedDog = originalDog; // Constructor por copia
    copiedDog = originalDog;     // Operador de asignación

	// Prueba de copia profunda "CAT"
    std::cout << "\nTesting deep copy:\n";
    Cat originalCat;
    Cat copiedCat = originalCat; // Constructor por copia
    copiedCat = originalCat;     // Operador de asignación

    // Prueba de cerebros
    std::cout << "\nTesting brains:\n";
    originalDog.getBrain()->setIdea("Soy guapo", 0);
    std::string* ideasDOG = originalDog.getBrain()->getIdeas();
    std::cout << ideasDOG[0] << std::endl;

    originalCat.getBrain()->setIdea("Soy grande", 0);
    std::string* ideasCAT = originalCat.getBrain()->getIdeas();
    std::cout << ideasCAT[0] << std::endl;
    
    std::cout << "\nTesting sounds:\n";
    // Hacer que los animales hagan sonidos
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        animals[i]->makeSound();
    }

    // Eliminar los objetos del array y verificar que se llaman los destructores correctos
    std::cout << "\nDeleting animals:\n";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        delete animals[i];
    }

    // Si se ejecuta un analizador de memoria como Valgrind o similar, no debe haber fugas de memoria.

    return (0);
}