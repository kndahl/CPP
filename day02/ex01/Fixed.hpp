/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:45:10 by kdahl             #+#    #+#             */
/*   Updated: 2021/02/09 13:23:45 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class	Fixed
{
	private:
		int		_number;
		static const int	_fixed = 8;
	public:
		Fixed();								//Constructor
		Fixed(int _number);
		Fixed(float _number);
		~Fixed();								//Destructor
		Fixed(const Fixed &copy);				//A copy constructor
		Fixed& operator = (const Fixed &op);	//An assignation operator overload.
		int		getRawBits(void) const;			//Returns the raw value of the fixed point value
		void	setRawBits(int const raw);		//Sets the raw value of the fixed point value
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, Fixed const &fixed);

#endif