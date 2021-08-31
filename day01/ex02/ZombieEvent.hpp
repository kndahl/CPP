/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:36:41 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/20 16:37:42 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <random>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	type;
	public:
		ZombieEvent();
		virtual ~ZombieEvent();

		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		void 	randomChump();
};

#endif