/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.classe.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:35:55 by aabel             #+#    #+#             */
/*   Updated: 2023/11/27 21:45:58 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASSE_H
#define PHONEBOOK_CLASSE_H

#include "Contact.classe.hpp"
#include <iostream>
#include <string>

class Phonebook {
private:
    contacts contacts[8];

public:
    Phonebook(void);
    ~Phonebook(void);
    void addContactFromInput();
    void displayContacts() const;
    int nb_last_added;
};

#endif // PHONEBOOK_H
