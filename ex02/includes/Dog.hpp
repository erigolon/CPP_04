/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:39:01 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 12:29:36 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class  Dog : public AAnimal
{
private:

	Brain*	_brain;
	
public:

    		Dog();
			Dog(const Dog &copy);

    		~Dog();

	Dog		&operator=(const Dog &copy);

	Brain*	getBrain();

	void	makeSound() const;
	
};

#endif