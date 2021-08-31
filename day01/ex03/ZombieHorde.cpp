/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:54:42 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/21 14:46:07 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

std::string	randomName()
{
	std::string ZombieNames[10] = {"Vincent", "Bartholomew", "Stefan", "Antoni", "Kasper", "Victor", "Peter", "Nathaniel", "Tomas", "Leonardo"};
	return (ZombieNames[rand() % 10]);
}


ZombieHorde::ZombieHorde(int counter)
{
	std::cout << "Debbug counter " << counter << std::endl;
	if (counter > 0)
	{
		this->zombie = new (std::nothrow) Zombie[counter];
		if (!this->zombie) { return ; }
		for (int i = 0; i < counter; i++)
		{
			zombie[i].setZombieName(randomName());
			zombie[i].setZombieType("Equal");
			zombie[i].announce();
		}
	}
	else
		std::cout << "No zombies :(" << std::endl;
}

ZombieHorde::~ZombieHorde(void)
{
	if (this->zombie)
	{
		std::cout << "\nHorde Destroyed.\n" << std::endl;
		delete[] this->zombie;
	}
}
