/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:06:21 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/25 16:37:36 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) { return ; }

HumanB::~HumanB(void) { return ; }

void	HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }

void	HumanB::attack(void) { std::cout << this->_name << "attacks with his " << this->_weapon->getType() << std::endl; }
