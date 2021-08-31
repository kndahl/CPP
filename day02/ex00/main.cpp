/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:25:47 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/26 02:24:46 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) 
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	
	c = b;
	
	std::cout << a.getRawBits() << std::endl; std::cout << b.getRawBits() << std::endl; std::cout << c.getRawBits() << std::endl;
	return 0;
}