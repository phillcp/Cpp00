/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:26:16 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/08 17:05:07 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 0;
	char	*s;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++i < argc)
		{
			s = argv[i];
			for (size_t j = 0; s[j]; j++)
			{
				std::cout << static_cast<char>(toupper(s[j]));
			}
		}
		std::cout << std::endl;
	}
	return (1);
}

