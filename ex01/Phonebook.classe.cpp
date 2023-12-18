/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.classe.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:41:30 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 10:57:39 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.classe.hpp"

Phonebook::Phonebook(void)
{
    return ;
}

Phonebook::~Phonebook(void)
{
    return ;
}

void Phonebook::addContactFromInput(void)
{
    if (this->nb_last_added == 8)
        this->nb_last_added = 0;
    this->contacts[this->nb_last_added].set_user();
    this->nb_last_added++;
}

void Phonebook::displayContacts(void) const
{
    char i;
    for (int index = 0; index < 8; index++)
    {
        std::cout << index << "         |";
        this->contacts[index].get_first_name();
        this->contacts[index].get_last_name();
        this->contacts[index].get_nickname();
        std::cout << std::endl;
    }
    std::cout << "Which contact do you want to see ?" << std::endl;
    std::cin >> i;
    int y = std::atoi(&i);
    if (y < 0 || y > 7)
        std::cout << "Invalid index." << std::endl;
    else
        this->contacts[y].get_all_info();
}