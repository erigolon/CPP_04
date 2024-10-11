/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:37:33 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 12:48:57 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
protected:

	std::string	_type;

public:

	AMateria();
	AMateria(const std::string& type);
	AMateria(const AMateria& copy);
	
	~AMateria();

	AMateria&			operator=(const AMateria& copy);

	const std::string&	getType() const;

	virtual AMateria*	clone() const = 0;
	virtual	void		use(Icharacter& target);
    
};

#endif