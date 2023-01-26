/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:19:51 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/13 01:40:06 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

using std::string;

class Contact {
	private:
		bool empty;
		string first_name;
		string last_name;
		string nickname;
		string num;
		string secret;
	public:
		Contact(string f_name, string l_name, string n_name, string c_num, string d_secret);
		Contact();
		~Contact();
		string getf_name();
		string getl_name();
		string getn_name();
		string getc_num();
		string getd_secret();
		bool isempty();
		void setf_name(string f_name);
		void setl_name(string l_name);
		void setn_name(string n_name);
		void setc_num(string c_num);
		void setd_secret(string d_secret);
		void printinfo(int index);
		void printcontact();
};

#endif
