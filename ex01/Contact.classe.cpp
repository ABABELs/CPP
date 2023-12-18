/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.classe.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:38:13 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 10:57:45 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.classe.hpp"

contacts::contacts(void)
{
    return ;
}

contacts::~contacts(void)
{
    return ;
}

void    contacts::set_user(void)
{
    std::cout << "First name: ";
    std::getline(std::cin, this->First_Name);
    std::cout << "Last name: ";
    std::getline(std::cin, this->Last_Name);
    std::cout << "Nickname: ";
    std::getline(std::cin, this->Nick_Name);
    std::cout << "Phone number: ";
    std::getline(std::cin, this->Phone_Number);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, this->Darkest_Secret);
}

void    contacts::get_first_name(void) const
{
    int i = this->First_Name.length();
    if (i > 9)
    {
        for (int j = 0; j < 9; j++)
            std::cout << this->First_Name[j];
        std::cout << ".|";
    }
    else
    {
        for (int j = 9 - i; j >= 0; j--)
            std::cout << " ";
        std::cout << this->First_Name;
        std::cout << "|";
    }
}

void    contacts::get_last_name(void) const
{
    int i = this->Last_Name.length();
    if (i > 9)
    {
        for (int j = 0; j < 9; j++)
            std::cout << this->Last_Name[j];
        std::cout << ".|";
    }
    else
    {
        for (int j = 9 - i; j >= 0; j--)
            std::cout << " ";
        std::cout << this->Last_Name;
        std::cout << "|";
    }
}

void    contacts::get_nickname(void) const
{
    int i = this->Nick_Name.length();
    if (i > 9)
    {
        for (int j = 0; j < 9; j++)
            std::cout << this->Nick_Name[j];
        std::cout << ".|";
    }
    else
    {
        for (int j = 9 - i; j >= 0; j--)
            std::cout << " ";
        std::cout << this->Nick_Name;
        std::cout << "|";
    }
}

void    contacts::get_phone_number(void) const
{
    int i = this->Phone_Number.length();
    if (i == 10)
        std::cout << this->Phone_Number << "|" << std::endl;
    else
    {
        for (int j = 0; j < 10 - i; j++)
            std::cout << " ";
        std::cout << "|" << std::endl;
    }
}

void    contacts::get_all_info(void) const
{
    std::cout << this->First_Name << std::endl;
    std::cout << this->Last_Name << std::endl;
    std::cout << this->Nick_Name << std::endl;
    std::cout << this->Phone_Number << std::endl;
    std::cout << this->Darkest_Secret << std::endl;
}
