/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:16:10 by kammi             #+#    #+#             */
/*   Updated: 2024/11/08 12:49:50 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact(): _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("")
{
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret): _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
{
}

Contact::~Contact()
{
}


//getters

std::string		Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string		Contact::getLastName(void) const
{
	return this->_lastName;
}

std::string		Contact::getNickName(void) const
{
	return this->_nickName;
}

std::string		Contact::getPhoneNumber(void) const
{
	return this->_phoneNumber;
}

std::string		Contact::getDarkestSecret(void) const
{
	return this->_darkestSecret;
}


//fonctions de std
//std::setw : permet de définir la largeur du champ de sortie
//std::setfill : permet de définir le caractère de remplissage pour std::setw
//std::left : aligne le texte à gauche
//std::right : aligne le texte à droite
//std::internal : aligne le texte à gauche et les chiffres à droite
//std::hex : affiche les nombres en hexadécimal
//std::dec : affiche les nombres en décimal
//std::flush : sert à vider le buffer et à forcer l'écriture des données dans le flux de sortie
//std::endl : force l'écriture du buffer et ajoute un retour à la ligne
//std::cin.ignore : ignore un nombre donné de caractères
//std::cin.clear : efface les erreurs de std::cin
//std::cin.eof : vérifie si la fin du fichier a été atteinte
//std::cin.good : vérifie si std::cin est en bon état
//std::cin.fail : vérifie si std::cin a échoué
//std::cin.bad : vérifie si std::cin est dans un état irrécupérable
//std::cin.getline : lit une ligne de texte
//std::cin >> : lit un type de données depuis std::cin
//std::cout << : écrit un type de données dans std::cout
