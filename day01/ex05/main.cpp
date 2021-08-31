/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:54:52 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/22 15:02:33 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main(void) 
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}