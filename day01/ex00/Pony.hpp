/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 19:01:55 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/18 20:35:28 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
	private:
		std::string	name;
		std::string	color;

	public:
		Pony();  //Constructor
		~Pony(); //Destructor

		void	SayPonyHello(int kind);
		void	SayPonyType(int kind);
};

void	ponyOnTheHeap(void);
void	ponyOnTheStack(void);

#endif