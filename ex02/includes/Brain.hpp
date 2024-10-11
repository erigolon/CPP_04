/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:46:48 by erigolon          #+#    #+#             */
/*   Updated: 2024/10/11 12:29:21 by erigolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:

	std::string		_ideas[100];

public:

    				Brain();
					Brain(const Brain& copy);
	
    				~Brain();

	Brain&			operator=(const Brain& copy);

	void			setIdea(std::string idea, int i);
	std::string*	getIdeas();

};

#endif