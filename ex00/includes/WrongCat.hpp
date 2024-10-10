/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:27:00 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/10 15:37:41 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class  WrongCat : public WrongAnimal
{
public:

                WrongCat();
	            WrongCat(const WrongCat &copy);

                ~WrongCat();

	WrongCat    &operator=(const WrongCat &copy);

	void	    makeSound() const;
	
};

#endif