/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.classe.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:35:55 by aabel             #+#    #+#             */
/*   Updated: 2023/11/22 15:10:53 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASSE_H
#define PHONEBOOK_CLASSE_H

#include "Contact.classe.hpp"
#include <iostream>
#include <string>

class Phonebook {
private:
    contacts *contacts[8];
    int nextContactIndex;

public:
    Phonebook();
    void addContactFromInput();
    void displayContacts() const;
};

#endif // PHONEBOOK_H
