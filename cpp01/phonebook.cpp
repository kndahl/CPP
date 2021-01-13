/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:11:09 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/13 21:46:29 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class Contact
{
	public:
		//Function prints name and surename of added contact
		void	print(void)
		{
			cout << "You have added the contact " << firstName << " " << lastName << endl;
		}
		
		//Function sets the name of the contact
		void	setName(string temp)
		{
			firstName = temp;
		}
		
		//Function sets the last name of the contact
		void	setLastName(string temp)
		{
			lastName = temp;
		}

	private:
		//Here we declare the variables with their type
		string	firstName;
		string	lastName;
		
};

class	PhoneBook
{
	private:
		Contact	contact[8];
		int		contact_counter = 0;
	
	public:
		void	addContact(void)
		{
			string	AddFirstName;
			string	AddLastName;


			if (contact_counter > 8 ) { cout << "Too many contacts!" << endl; };
			cout << "\x1B[34mEnter first name: \033[0m";
			getline(cin, AddFirstName);
			cout << "\x1B[34mEnter last name: \033[0m";
			getline(cin, AddLastName);
			contact[contact_counter].setName(AddFirstName);
			contact[contact_counter].setLastName(AddLastName);
			for (int i = 0; i <= contact_counter; i++)
			{
				contact[i].print();	
			}
			//contact[contact_counter].print();
			contact_counter++;
		}
};

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
	bool		proc_running;
	string		todo;
	PhoneBook	phonebook;

	proc_running = true;
	welcome();
	while (proc_running)
	{
		cout << "\x1B[31m>\033[0m";

		//Getting command from user and write it in todo
		getline(cin, todo);
		if (todo == "ADD") { phonebook.addContact(); }
		if (todo == "SEARCH") { cout << "You write " << todo << endl; }
		if (todo == "EXIT") { cout << "Bye Bye!" << endl; proc_running = false; }
	}
	return (0);
}