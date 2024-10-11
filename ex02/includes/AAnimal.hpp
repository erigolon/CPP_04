/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:35:27 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 11:43:15 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
protected:

    std::string 	_type;

public:

    				AAnimal(void);
					AAnimal(const std::string type);
					AAnimal(const AAnimal& copy);

    virtual 		~AAnimal();

	AAnimal&		operator=(const AAnimal& copy);

	std::string		getType() const;

    virtual void	makeSound() const = 0;
    
};

#endif