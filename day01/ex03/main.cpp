/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:19:23 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/21 14:39:28 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	func() 
{ 
	ZombieHorde	zomb(5);
	std::cout << std::endl;
	ZombieHorde	moreZomb(10);
	std::cout << std::endl;
}

int	main(void)
{
	srand(time(0)); 
	func();
	int	n;
	std::cin >> n;
	return (0);
}