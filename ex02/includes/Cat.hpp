/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:51:04 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 12:29:30 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class  Cat : public AAnimal
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