/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 00:28:50 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/13 02:09:55 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H

#include <string>

#include <sstream>

#define ITOS(x) static_cast< std::ostringstream & >( \
	( std::ostringstream() << std::dec << x ) ).str()

void printrow(std::string s1, std::string s2, std::string s3, std::string s4);
int to_int(const char *s);

#endif
