/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:25:22 by babels            #+#    #+#             */
/*   Updated: 2023/12/18 13:23:18 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.classe.hpp"
#include <iostream>
#include <string>

int main(void)
{
    Phonebook phonebook;

    std::cout << " / Welcome to your phonebook ! \\ " << std::endl;
    std::cout << "|| * ADD  *  SEARCH  *  EXIT * || " << std::endl;
    phonebook.nb_last_added = 0;
    for (std::string buffer; buffer != "EXIT";)
    {
        std::getline(std::cin, buffer);

        if (buffer == "ADD")
        {
            phonebook.addContactFromInput();
            std::cout << "|| * ADD  *  SEARCH  *  EXIT * || " << std::endl;
        }
        else if (buffer == "SEARCH")
        {
            phonebook.displayContacts();
            std::cout << "|| * ADD  *  SEARCH  *  EXIT * || " << std::endl;
        }
        else if (buffer == "EXIT")
            break ;
        else if (buffer != "")
        {
            std::cout << "Invalid command." << std::endl;
            std::cout << "|| * ADD  *  SEARCH  *  EXIT * || " << std::endl;
        }
        buffer = "";
    }
    return (0);
}