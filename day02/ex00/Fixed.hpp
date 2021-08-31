/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:27:23 by kdahl             #+#    #+#             */
/*   Updated: 2021/02/09 12:40:17 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int		_number;
		static const int	_fixed;
	public:
		Fixed();								//Constructor
		~Fixed();								//Destructor
		Fixed(const Fixed &copy);				//A copy constructor
		Fixed& operator = (const Fixed &op);	//An assignation operator overload.
		int		getRawBits(void) const;			//Returns the raw value of the fixed point value
		void	setRawBits(int const raw);		//Sets the raw value of the fixed point value
		
};

#endif