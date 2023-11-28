/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:22:54 by babels            #+#    #+#             */
/*   Updated: 2023/11/28 20:36:00 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        std::string str(argv[i]);
        for (size_t j = 0; j < str.length(); j++)
            std::cout << (char)std::toupper(argv[i][j]);
    }
    std::cout << std::endl;
    return (0);
}