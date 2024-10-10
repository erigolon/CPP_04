/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:39:01 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/10 15:30:27 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class  Dog : public Animal
{
public:

    		Dog();
			Dog(const Dog &copy);

    		~Dog();

	Dog		&operator=(const Dog &copy);

	void	makeSound() const;
	
};

#endif