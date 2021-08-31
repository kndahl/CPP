/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:53:41 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/21 14:12:33 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <random>
# include "Zombie.hpp"

class ZombieHorde
{
private:
	int		counter;
	Zombie	*zombie;
public:
	ZombieHorde(int counter);
	~ZombieHorde();

	void	announce(void);
};


#endif