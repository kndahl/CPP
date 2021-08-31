/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:45:12 by kdahl             #+#    #+#             */
/*   Updated: 2021/02/09 13:30:06 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) 
{ 
	std::cout << "Default constructor called" << std::endl;
	_number = 0; //Default
	return ; 
}

Fixed::Fixed(int number)
{
	std::cout << "Int constructor called" << std::endl;
	_number = number << _fixed;
}

Fixed::Fixed(float number)
{
	std::cout << "Float constructor called" << std::endl;
	_number = roundf(number * (1 << _fixed));
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

float Fixed::toFloat( void ) const
{
	return(static_cast<float>(_number) / (1 << _fixed));
}

int Fixed::toInt( void ) const
{
	return(_number >> 8);
}


std::ostream& operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
} 