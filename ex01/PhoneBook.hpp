/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:15:51 by kammi             #+#    #+#             */
/*   Updated: 2024/11/08 11:57:43 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <limits>

class PhoneBook
{
	private:
		void	_displayAllContacts() const;
		void	_displayContact(int index) const;
		void	_displayColumn(const std::string &line) const;

		int		_currentContact;
		int 	_oldestContact;
		Contact	_contacts[8];


	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact();

};


# endif
