/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:06:18 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/22 21:18:34 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string		_name;
		Weapon const	&_weapon;
	public:
		HumanA(std::string name, Weapon const &weapon);
		virtual	~HumanA(void);

		void	attack(void);
};