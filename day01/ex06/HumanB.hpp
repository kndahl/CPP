/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:06:23 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/25 16:36:30 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

#include "iostream"
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string		_name;
		Weapon const	*_weapon;
	public:
		HumanB(std::string name);
		virtual	~HumanB(void);

		void	setWeapon(Weapon &weapon);
		void	attack(void);
};