/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:20:14 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/13 01:55:47 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Contact.hpp>
#include <utils.hpp>

Contact::Contact(string f_name, string l_name, string n_name, string c_num, string d_secret)
{
	this->first_name = f_name;
	this->last_name = l_name;
	this->nickname = n_name;
	this->num = c_num;
	this->secret = d_secret;
	this->empty = false;
}

Contact::Contact(){
	this->empty = true;
}

Contact::~Contact(){}

string Contact::getf_name(){
	return (this->first_name);
}

string Contact::getl_name(){
	return (this->last_name);
}

string Contact::getn_name(){
	return (this->nickname);
}

string Contact::getc_num(){
	return (this->num);
}

string Contact::getd_secret(){
	return (this->secret);
}

bool Contact::isempty(){
	return (this->empty);
}

void Contact::setf_name(string f_name){
	this->first_name = f_name;
	this->empty = false;
}

void Contact::setl_name(string l_name){
	this->last_name = l_name;
	this->empty = false;
}

void Contact::setn_name(string n_name){
	this->nickname = n_name;
	this->empty = false;
}

void Contact::setc_num(string c_num){
	this->num = c_num;
	this->empty = false;
}

void Contact::setd_secret(string d_secret){
	this->secret = d_secret;
	this->empty = false;
}

void Contact::printinfo(int index){
	printrow(ITOS(index), this->first_name, this->last_name, this->nickname);
}

void Contact::printcontact(){
	std::cout << "First Name: " << this->first_name << std::endl;
	std::cout << "Last Name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->num << std::endl;
	std::cout << "Darkest Secret: " << this->secret << std::endl;
}
