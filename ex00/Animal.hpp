/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:35:27 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/09 13:01:00 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:

    std::string _type;

public:

    Animal(void);
	Animal(const std::string type);
	Animal(const Animal& copy);

    ~Animal();

	Animal&		operator=(const Animal& copy);
    
};

#endif