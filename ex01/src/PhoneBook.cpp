/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:20:49 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/13 02:18:32 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include <PhoneBook.hpp>
#include <utils.hpp>

PhoneBook::PhoneBook(){
	this->next = 0;
}

PhoneBook::~PhoneBook(){}

void PhoneBook::add(string f_name, string l_name, string n_name, string c_num, string d_secret)
{
	this->list[this->next].setf_name(f_name);
	this->list[this->next].setl_name(l_name);
	this->list[this->next].setn_name(n_name);
	this->list[this->next].setc_num(c_num);
	this->list[this->next].setd_secret(d_secret);
	this->next = (this->next + 1) % MAX_BOOK_SIZE;
}

void PhoneBook::printbook(){
	printrow("Index", "First Name", "Last Name", "Nickname");
	for (int i = 0; i < MAX_BOOK_SIZE && !this->list[i].isempty(); i++)
		this->list[i].printinfo(i + 1);
}

void PhoneBook::printcontact(int i){
	this->list[i].printcontact();
}

bool PhoneBook::checkindex(int i){
	return i >= 0 && i < MAX_BOOK_SIZE && !this->list[i].isempty();
}

int PhoneBook::getsize() {
	if (this->list[this->next].isempty())
		return this->next;
	else
		return MAX_BOOK_SIZE;
}
