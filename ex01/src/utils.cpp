/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 00:08:59 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/13 00:58:47 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

using std::string;

static void printcolumn(string s){
	if (s.length() > 10)
		s = s.erase(9, std::string::npos).append(".");
	std::cout << "|" << std::setfill(' ') << std::setw(10) << s;
}

void printrow(string s1, string s2, string s3, string s4){
	printcolumn(s1);
	printcolumn(s2);
	printcolumn(s3);
	printcolumn(s4);
	std::cout << "|" << std::endl;
}

int to_int(const char *s)
{
	if (s == NULL || *s == '\0')
		throw std::invalid_argument("null or empty string argument");
	bool negate = (s[0] == '-');
	if (*s == '+' || *s == '-')
		++s;
	if (*s == '\0')
		throw std::invalid_argument("sign character only.");
	int result = 0;
	while (*s)
	{
		if (*s < '0' || *s > '9')
			throw std::invalid_argument("invalid number");
		result = result * 10 - (*s - '0');
		++s; 
	}
	return (negate ? result : -result);
}
