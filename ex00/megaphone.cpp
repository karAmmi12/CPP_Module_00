/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:43:50 by kammi             #+#    #+#             */
/*   Updated: 2024/11/08 14:01:29 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"; 
	else
		{
			for (int i = 1; av[i]; i++)
			{
				for (int j = 0; av[i][j]; j++)
					std::cout << (char) toupper(av[i][j]);
				if (i < ac - 1)
					std::cout << ' ';
			}
		}
		std::cout << std::endl;
		return (0);
}
