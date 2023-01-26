/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:07:01 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/13 02:18:47 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <PhoneBook.hpp>
#include <utils.hpp>

static string ft_getline(string prompt)
{
	string input;

	std::cout << prompt;
	getline(std::cin, input);
	return (input);
}

static void	add(PhoneBook *book)
{
	string f_name, l_name, n_name, c_num, d_secret;

	f_name = ft_getline("Input contact's first name: ");
	if (!f_name.compare(""))
		return ;
	l_name = ft_getline("Input contact's last Name: ");
	if (!l_name.compare(""))
		return ;
	n_name = ft_getline("Input contact's nickname: ");
	if (!n_name.compare(""))
		return ;
	c_num = ft_getline("Input contact's number: ");
	if (!c_num.compare(""))
		return ;
	d_secret = ft_getline("Input contact's darkest secret: ");
	if (!d_secret.compare(""))
		return ;
	(*book).add(f_name, l_name, n_name, c_num, d_secret);
}

int	main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;
	PhoneBook book;
	string in;
	while (1)
	{
		std::cout << "WackyPhoneBook: ";
		getline(std::cin, in);
		if (!in.compare("EXIT"))
			break;
		if (!in.compare("ADD"))
			add(&book);
		else if (!in.compare("SEARCH"))
		{
			if (book.getsize() == 0)
			{
				std::cout << "PhoneBook empty.\n";
				continue;
			}
			book.printbook();
			in = ft_getline("Input desired contact index: ");
			if (!in.compare(""))
				continue;
			try
			{
				int index = to_int(static_cast<const char *>(in.c_str()));
				if (!book.checkindex(index - 1))
				{
					std::cout << "Not a valid index.\n";
					continue;
				}
				book.printcontact(index - 1);
			}
			catch(const std::exception& e)
			{
				std::cout << "Couldn't convert index to a number.\n";
			}
		}
		else
			std::cout << "Command input unrecognized, try again with these available commands:\n\tADD\n\tSEARCH\n\tEXIT\n";
	}
	return (1);
}
