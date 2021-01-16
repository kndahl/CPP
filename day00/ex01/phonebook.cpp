/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:11:09 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/16 17:55:46 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	public:
		//Function prints name and surename of added contact
		void	print(void) { std::cout << "\x1B[33mYou have added the contact " << firstName << " " << lastName << " .His nickname " << nickname << " and his login is " << login << ". Other information: " << postal << ", " << email << ", " << phone << ", " << bday << ", " << meal << ", " << color << ", " << secret << ".\033[0m" << std::endl; }

		//Functions that set parametrs of the contact
		void	setName(std::string str) { firstName = str; }	
		void	setLastName(std::string input) { lastName = input; }
		void	setNick(std::string input) { nickname = input; }
		void	setLogin(std::string input) { login = input;	}
		void	setPostal(std::string input) { postal = input; }
		void	setMail(std::string input) { email = input; }
		void	setPhone(std::string input) { phone = input;	}
		void	setBday(std::string input) { bday = input; }
		void	setMeal(std::string input) { meal = input; }
		void	setColor(std::string input) { color = input; }
		void	setSecret(std::string input) { secret = input; }

		//Functions that returned parametrs
		std::string	getName(void) { return (firstName); }
		std::string	getSurename(void) { return (lastName); }
		std::string	getNick(void) { return (nickname); }
		std::string	getLogin(void) { return (login); }
		std::string	getPostal(void) { return (postal); }
		std::string	getEmail(void) { return (email); }
		std::string	getPhone(void) { return (phone); }
		std::string	getBday(void) { return (bday); }
		std::string	getMeal(void) { return (meal); }
		std::string	getColor(void) { return (color); }
		std::string	getSecret(void) { return (secret); }

	private:
		//Here we declare the variables with their type
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	login;
		std::string	postal;
		std::string	email;
		std::string	phone;
		std::string	bday;
		std::string	meal;
		std::string	color;
		std::string	secret;
		
};

class	PhoneBook
{
	private:
		Contact	contact[8];
		int		contact_counter;
		std::string	AddFirstName;
		std::string	AddLastName;
		std::string	addNickname;
		std::string	addLogin;
		std::string	addPostal;
		std::string	addEmail;
		std::string	addPhone;
		std::string	addBday;
		std::string	addMeal;
		std::string	addColor;
		std::string	addSecret;
	
	public:
		void	addContact(void)
		{
			contact_counter = 0;

			std::cout << "\x1B[34mEnter first name: \033[0m";
			getline(std::cin, AddFirstName);
			std::cout << "\x1B[34mEnter last name: \033[0m";
			getline(std::cin, AddLastName);
			std::cout << "\x1B[34mEnter nickname: \033[0m";
			getline(std::cin, addNickname);
			std::cout << "\x1B[34mEnter login: \033[0m";
			getline(std::cin, addLogin);
			std::cout << "\x1B[34mEnter postal adress: \033[0m";
			getline(std::cin, addPostal);
			std::cout << "\x1B[34mEnter email: \033[0m";
			getline(std::cin, addEmail);
			std::cout << "\x1B[34mEnter the phone number: \033[0m";
			getline(std::cin, addPhone);
			std::cout << "\x1B[34mEnter birthday: \033[0m";
			getline(std::cin, addBday);
			std::cout << "\x1B[34mEnter the favorite meal: \033[0m";
			getline(std::cin, addMeal);
			std::cout << "\x1B[34mEnter underwear color: \033[0m";
			getline(std::cin, addColor);
			std::cout << "\x1B[34mEnter the darkest secret: \033[0m";
			getline(std::cin, addSecret);
			contact[contact_counter].setName(AddFirstName);
			contact[contact_counter].setLastName(AddLastName);
			contact[contact_counter].setNick(addNickname);
			contact[contact_counter].setLogin(addLogin);
			contact[contact_counter].setPostal(addPostal);
			contact[contact_counter].setMail(addEmail);
			contact[contact_counter].setPhone(addPhone);
			contact[contact_counter].setBday(addBday);
			contact[contact_counter].setMeal(addMeal);
			contact[contact_counter].setColor(addColor);
			contact[contact_counter].setSecret(addSecret);
			contact[contact_counter].print();	
			contact_counter++;
		}

		void	printSearch(int i, std::string name)
		{
			if (name.size() > 10)
   			{
        		name = name.insert(9, ".");
        		name = name.substr(0, 10);
    		}
   			else
        		while (name.length() < 10)
            		name = name.insert(0, " ");
   			std::cout << "\x1B[34m"<< name << "\033[0m";
		}

		void	printIndex(int i, PhoneBook phonebook)
		{
			Contact		contact[8];
			std::string		putName;
			std::string		putLastName;
			std::string		putNickname;
			std::string		putLogin;
			std::string		putPostal;
			std::string		putEmail;
			std::string		putPhone;
			std::string		putBday;
			std::string		putMeal;
			std::string		putSecret;
			std::string		putColor;
			
			putName = phonebook.contact[i].getName();
			putLastName = phonebook.contact[i].getSurename();
			putNickname = phonebook.contact[i].getNick();
			putLogin = phonebook.contact[i].getLogin();
			putPostal = phonebook.contact[i].getPostal();
			putEmail = phonebook.contact[i].getEmail();
			putPhone = phonebook.contact[i].getPhone();
			putBday = phonebook.contact[i].getBday();
			putMeal = phonebook.contact[i].getMeal();
			putSecret = phonebook.contact[i].getSecret();
			putColor = phonebook.contact[i].getColor();
			std::cout << "\x1B[34mThe contact " << putName << " " << putLastName << " .His nickname " << putNickname << " and his login is " << putLogin << ". Other information: Postal adress: " << putPostal << ", Email: " << putEmail << ", Phone: " << putPhone << ", BirthDay: " << putBday << ", Favorite Meal: " << putMeal << ", Underwear color: " << putColor << ", the Darkest Secret: " << putSecret << ".\033[0m" << std::endl;
		}

		void	searchContact(int i, PhoneBook phonebook)
		{
			Contact		contact[8];
			int			j = 0;
			int			flag = 0;

			std::cout << "     index|first name| last name|  nickname" << std::endl;
			std::cout << "-------------------------------------------" << std::endl;
			while (j < i)
			{
				std::cout << "         \x1B[33m" << j << "|\033[0m";
				printSearch(j, phonebook.contact[j].getName());
				std::cout << "|";
				printSearch(j,  phonebook.contact[j].getSurename());
				std::cout << "|";
				printSearch(j,  phonebook.contact[j].getNick());
				std::cout << "|" << std::endl;
				j++;
				flag = 1;
			}
			if (flag) 
			{
				while (1)
				{
					int		input;

					std::cout << "Please choose the index of the contact in the range of 0 to " << j - 1 << ": ";
					std::cin >> input;
					if (std::cin.fail()) { std::cin.clear(); std::cin.ignore(); std::cout << "Incorrect input!" << std::endl; continue; }
					//cout << "input: " << input << " i: " << i << " j:" << j << endl;
					if ( input >= 0 && input < i ) { printIndex(input, phonebook); break; }
					else { std::cout << "Incorrect index!" << std::endl; break; }
				}
			}
		}
};

void	welcome(void)
{
	std::cout << "\x1B[33m/* ********************************************************************** */\033[0m" << std::endl;
	std::cout << "\x1B[33m/*                                                                        */\033[0m" << std::endl;
	std::cout << "\x1B[33m/*           ／＞    フ                                                   */\033[0m" << std::endl;
	std::cout << "\x1B[33m/*           |  _   _|                                                    */\033[0m" << std::endl;
	std::cout << "\x1B[33m/*          ／`ミ _x 彡                                                   */\033[0m" << std::endl;
	std::cout << "\x1B[33m/*         /         |                                                    */\033[0m" << std::endl;
	std::cout << "\x1B[33m/*        /   \\     ﾉ     ##   # #   #    #  #  ###  ###  ###  ###  # #   */\033[0m" << std::endl;
	std::cout << "\x1B[33m/*     /￣|   |  | |     # #  ###  #  #  ## #  ##   ###  # #  # #  ##     */\033[0m" << std::endl;
	std::cout << "\x1B[33m/*    | (￣ヽ__ヽ_)_)   #    # #   # #  #  #  ###  ###  ###  ###  #  #    */\033[0m" << std::endl;
	std::cout << "\x1B[33m/*    ＼二つ           🅳🅴🆂🅸🅶🅽🅴🅳 🅱🆈 🅺🅳🅰🅷🅻                                  */\033[0m" << std::endl;
	std::cout << "\x1B[33m/*                                                                        */\033[0m" << std::endl;
	std::cout << "\x1B[33m/* ********************************************************************** */\033[0m" << std::endl;
	std::cout << "\x1B[32mWelcome at my Phonebook! You are free to ADD and SEARCH contacts!\nWanna exit? Write EXIT!\nNow the phonebook is empty. Add some comtacts by command ADD and then you can SEARCH the contact you need. Good luck!\033[0m" << std::endl;
}

int	main(void)
{
	bool		proc_running;
	std::string		todo;
	PhoneBook	phonebook;
	int			i = 0;

	proc_running = true;
	welcome();
	while (proc_running)
	{
		std::cout << "\x1B[31m>\033[0m";

		//Getting command from user and write it in todo
		getline(std::cin, todo);
		if (i == 8 && todo == "ADD") { std::cout << "Too many contacts!" << std::endl; }
		if (todo == "ADD" && i <= 7) { phonebook.addContact(); i++; }
		if (todo == "SEARCH") { phonebook.searchContact(i, phonebook); }
		if (todo == "EXIT") { std::cout << "\x1B[33mBye Bye!\033[0m" << std::endl; proc_running = false; }
	}
	return (0);
}