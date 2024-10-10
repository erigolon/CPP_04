/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:27:57 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/10 15:29:16 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:

    std::string 	_type;

public:

    				WrongAnimal(void);
					WrongAnimal(const std::string type);
					WrongAnimal(const WrongAnimal& copy);

    virtual 		~WrongAnimal();

	WrongAnimal&	operator=(const WrongAnimal& copy);

	std::string		getType() const;

    void			makeSound() const;
    
};

#endif