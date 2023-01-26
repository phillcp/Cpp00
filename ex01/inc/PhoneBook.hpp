/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:19:38 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/13 01:33:16 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <Contact.hpp>

#define MAX_BOOK_SIZE 8

using std::string;

class PhoneBook
{
protected:
	Contact list[MAX_BOOK_SIZE];
	int next;

public:
	PhoneBook();
	~PhoneBook();
	void add(string f_name, string l_name, string n_name, string c_num, string d_secret);
	void printbook();
	void printcontact(int i);
	bool checkindex(int i);
	int getsize();
};

#endif
