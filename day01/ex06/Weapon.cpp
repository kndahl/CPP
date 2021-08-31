/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:06:28 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/22 21:22:50 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) { return ; } //IT'S EQUAL TO Weapon::Weapon(std::string type) { _type = type; return ; }

Weapon::~Weapon(void) { return ; }

void	Weapon::setType(std::string type) { this->_type = type; }

std::string const &Weapon::getType(void) const { return (this->_type); } //& before the class
