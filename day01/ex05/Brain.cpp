/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:54:43 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/22 15:03:19 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) { return; }

Brain::~Brain(void) { return; }


std::string	Brain::identify(void)
{
	const long	adr = (long)this;

	std::stringstream strStream;
	strStream << "0x" << std::uppercase << std::hex << adr;
	return (strStream.str());
}