/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.classe.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:33:23 by aabel             #+#    #+#             */
/*   Updated: 2023/11/27 21:40:25 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASSE_HPP
#define CONTACT_CLASSE_HPP

#include <iostream>
#include <string>

class contacts {
private:
    std::string First_Name;
    std::string Last_Name;
    std::string Nick_Name;
    std::string Phone_Number;
    std::string Darkest_Secret;

public:
    contacts(void);
    ~contacts(void);
    void set_user(void);
    void get_first_name(void) const;
    void get_last_name(void) const;
    void get_nickname(void) const;
    void get_phone_number(void) const;
    void get_all_info(void) const;
};

#endif
