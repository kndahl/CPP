/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:36:32 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/21 13:22:31 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent	NewEvent;
	srand(time(0)); //Need for random
	
	NewEvent.setZombieType("Firts Type");
	NewEvent.randomChump();

	Zombie NewZombie("Grizzy");
	NewZombie.announce();
	
	NewEvent.setZombieType("Some new type");
	NewEvent.randomChump();
	
	Zombie	LastOne("IS HE DEATH???", "Yummy");
	LastOne.announce();
	
	return (0);
}