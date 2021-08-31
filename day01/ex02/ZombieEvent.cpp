/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:36:37 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/20 16:38:57 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {  this->type = "empty"; }

ZombieEvent::~ZombieEvent(void) { return ; }

void	ZombieEvent::setZombieType(std::string type) { this->type = type; }

Zombie *ZombieEvent::newZombie(std::string name) //Creating new Zombie
{
	Zombie	*newZombie = new Zombie(this->type, name);
	return (newZombie);
}

void	ZombieEvent::randomChump(void)
{
	Zombie *NewZ;
	std::string ZombieNames[10] = {"Vincent", "Bartholomew", "Stefan", "Antoni", "Kasper", "Victor", "Peter", "Nathaniel", "Tomas", "Leonardo"};

	NewZ = new Zombie(this->type, ZombieNames[rand() % 10]);
	NewZ->announce();
	delete NewZ;
}