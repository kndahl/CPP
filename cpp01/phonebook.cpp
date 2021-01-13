/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:11:09 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/13 15:00:00 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void	welcome(void)
{
	cout << "\x1B[33m/* ********************************************************************** */\033[0m" << endl;
	cout << "\x1B[33m/*                                                                        */\033[0m" << endl;
	cout << "\x1B[33m/*           ／＞    フ                                                   */\033[0m" << endl;
	cout << "\x1B[33m/*           |  _   _|                                                    */\033[0m" << endl;
	cout << "\x1B[33m/*          ／`ミ _x 彡                                                   */\033[0m" << endl;
	cout << "\x1B[33m/*         /         |                                                    */\033[0m" << endl;
	cout << "\x1B[33m/*        /   \\     ﾉ     ##   # #   #    #  #  ###  ###  ###  ###  # #   */\033[0m" << endl;
	cout << "\x1B[33m/*     /￣|   |  | |     # #  ###  #  #  ## #  ##   ###  # #  # #  ##     */\033[0m" << endl;
	cout << "\x1B[33m/*    | (￣ヽ__ヽ_)_)   #    # #   # #  #  #  ###  ###  ###  ###  #  #    */\033[0m" << endl;
	cout << "\x1B[33m/*    ＼二つ           🅳🅴🆂🅸🅶🅽🅴🅳 🅱🆈 🅺🅳🅰🅷🅻                                  */\033[0m" << endl;
	cout << "\x1B[33m/*                                                                        */\033[0m" << endl;
	cout << "\x1B[33m/* ********************************************************************** */\033[0m" << endl;
	cout << "\x1B[32mWelcome at my Phonebook! You are free to ADD, SEARCH and delete contacts!\nWanna exit? Write EXIT!\nNow the phonebook is empty. Add some comtacts by command ADD and then you can SEARCH the contact you need. Good luck!\033[0m" << endl;
}

int	main(void)
{
	bool	proc_running;
	string	todo;

	proc_running = true;
	while (proc_running)
	{
		welcome();
		cout << "\x1B[31m>\033[0m";

		//Getting command from user and write it in todo
		getline(cin, todo);
		if (todo == "ADD") { cout << "You write " << todo << endl; }
		if (todo == "SEARCH") { cout << "You write " << todo << endl; }
		if (todo == "EXIT") { cout << "Bye Bye!" << endl; proc_running = false; }
	}
	return (0);
}