/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:54:49 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/22 15:01:36 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class	Human
{
	private:
		Brain	brain;
	public:
		Human();
		virtual 	~Human();
		
		Brain		&getBrain(void);
		std::string	identify(void);
};

#endif