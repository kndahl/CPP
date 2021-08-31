/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:40:55 by kdahl             #+#    #+#             */
/*   Updated: 2021/01/18 18:23:18 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact
{
	public:
		void	print(void);
		void	setName(std::string str);
		void	setLastName(std::string input);
		void	setNick(std::string input);
		void	setLogin(std::string input);
		void	setPostal(std::string input);
		void	setMail(std::string input);
		void	setPhone(std::string input);
		void	setBday(std::string input);
		void	setMeal(std::string input);
		void	setColor(std::string input);
		void	setSecret(std::string input);
		std::string	getName(void);
		std::string	getSurename(void);
		std::string	getNick(void);
		std::string	getLogin(void);
		std::string	getPostal(void);
		std::string	getEmail(void);
		std::string	getPhone(void);
		std::string	getBday(void);
		std::string	getMeal(void);
		std::string	getColor(void);
		std::string	getSecret(void);

	private:
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
		void	addContact(int i);
		void	printIndex(int i, PhoneBook phonebook);
		void	printSearch(int i, std::string name);
		void	searchContact(int i, PhoneBook phonebook);
};

#endif