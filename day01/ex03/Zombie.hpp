/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:53:16 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/21 14:09:48 by kdahl            ###   ########.fr       */
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
		Zombie();
		Zombie(std::string type, std::string name); //Constructor
		~Zombie();									//Destructor
		void	setZombieName(std::string name);
		void	setZombieType(std::string type);

		void	announce(void);
};


#endif