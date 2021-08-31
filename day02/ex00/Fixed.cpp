/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:27:20 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/26 02:40:12 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) 
{ 
	std::cout << "Default constructor called" << std::endl;
	_number = 0; //Default
	return ; 
}

Fixed::~Fixed(void) 
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &op)
{
	std::cout << "Assignation operator called" << std::endl;
	_number = op.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_number = raw;
}