/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 19:01:53 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/18 20:45:28 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) { return ; }
Pony::~Pony(void) { return ; }

void	Pony::SayPonyHello(int kind)
{
	if (kind == 1) { Pony::name = "Jolcelyn"; Pony::color = "Pinky"; }
	if (kind == 2) { Pony::name = "Bart"; Pony::color = "Blue"; }
	std::cout << "Hello! my name is " << Pony::name << "! My favorite color is " << Pony::color << "." << std::endl;
}

void	Pony::SayPonyType(int kind)
{
	if (kind == 1) { std::cout << "I'm heapy pony!" << std::endl; }
	if (kind == 2) { std::cout << "I'm stacky pony!" << std::endl; }
}

void	ponyOnTheHeap(void)
{
	Pony	*heapPony = new (std::nothrow) Pony; //allocate space for Pony on HEAP
	if (!heapPony) { std::cout << "Couldn't allocate memory!" << std::endl; return ; } //Check
	heapPony->SayPonyHello(1);
	heapPony->SayPonyType(1);
	delete heapPony;  //clear memory
}

void	ponyOnTheStack(void)
{
	Pony	stackPony;			//allocate space for Pony at STACK
	stackPony.SayPonyHello(2);
	stackPony.SayPonyType(2);
}