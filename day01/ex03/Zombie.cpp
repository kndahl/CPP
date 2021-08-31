/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:03:05 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/21 13:55:16 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { };

Zombie::Zombie(std::string type, std::string name) { this->type = type; this->name = name; return ; }
// Zombie::Zombie(std::string name) { this->name = name; this->type = "None"; return ; }
Zombie::~Zombie(void) { std::cout << this->name << " is Dead" << std::endl; return ; }

void	Zombie::announce(void) { std::cout << "<" << this->name << " (" << this->type << ")" << "> Braiiiiiiinnnssss..." << std::endl; }

void	Zombie::setZombieType(std::string type) { this->type = type; };
void	Zombie::setZombieName(std::string name) { this->name = name; };