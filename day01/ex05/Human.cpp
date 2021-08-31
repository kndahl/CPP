/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:54:47 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/22 15:01:32 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) { return ; }
Human::~Human(void) { return ; }

Brain	&Human::getBrain(void) { return (this->brain); }
std::string Human::identify(void) { return (this->brain.identify()); }