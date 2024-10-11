/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:51:04 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 12:19:45 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class  Cat : public Animal
{
private:

	Brain*	_brain;
	
public:

    		Cat();
			Cat(const Cat &copy);

    		~Cat();

	Cat		&operator=(const Cat &copy);

	Brain*	getBrain();

	void	makeSound() const;
	
};

#endif