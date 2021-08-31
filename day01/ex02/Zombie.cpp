/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:36:34 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/20 16:30:14 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

Zombie::Zombie(std::string type, std::string name) { this->type = type; this->name = name; return ; }
Zombie::Zombie(std::string name) { this->name = name; this->type = "None"; return ; }

Zombie::~Zombie(void) { std::cout << this->name << " is Dead" << std::endl; return ; }

void	Zombie::announce(void) { std::cout << "<" << this->name << " (" << this->type << ")" << "> Braiiiiiiinnnssss..." << std::endl; }
