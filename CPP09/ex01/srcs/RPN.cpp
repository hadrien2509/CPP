/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:47:02 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/12 10:08:14 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/RPN.hpp"

int main(int ac, char **av)
{
    try {
        if (ac != 2)
            throw std::runtime_error("Invalid number of arguments");
        
        std::string arg;
        std::stringstream ss(av[1]);
        while (ss >> arg)
        {
            RPN::_numbers.push(arg);
        }
}