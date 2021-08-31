/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:28:47 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/19 23:33:57 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak(void)
{
	std::string*	panther = new (std::nothrow) std::string("String panther");
	if (!panther) { std::cout << "Memory allocation error!" << std::endl; return ; }
	std::cout << *panther << std::endl;
	delete panther;
}

int	main(void)
{
	memoryLeak();
	return (0);
}