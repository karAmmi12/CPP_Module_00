/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:15:42 by kammi             #+#    #+#             */
/*   Updated: 2024/11/08 12:42:29 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	PhoneBook	phoneBook;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command: " << std::flush;
		if (!std::getline(std::cin, command))
			return 0;
		if (command == "EXIT")
			return 0;
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
	}
	return 0;
}
