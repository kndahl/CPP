/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:06:15 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/25 16:37:39 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon const &weapon) : _name(name), _weapon(weapon) { return ; } //?????

HumanA::~HumanA(void) { return ; }

void	HumanA::attack(void) { std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl; }