/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:29:21 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/22 12:52:21 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string human = "HI THIS IS BRAIN";
	std::string	*ptr = &human; //Pointer
	std::string &ref = human; //Referance
	
	std::cout << "This is pointer " << *ptr << std::endl;
	std::cout << "This is referance " << ref << std::endl;
	std::cout << "Wanna know memory box? Here it is: " << &ref << std::endl;
	return (0);
}