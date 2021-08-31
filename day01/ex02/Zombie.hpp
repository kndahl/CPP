/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:36:39 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/20 16:22:12 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	type;
		std::string	name;
	public:
		Zombie(std::string name);
		Zombie(std::string type, std::string name); //Constructor
		~Zombie();	//Destructor

		void	announce(void);
};


#endif