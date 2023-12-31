/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:51:30 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/27 17:30:04 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl	instance;

    instance.complain("DEBUG"); 
    instance.complain("INFO");
    instance.complain("WARNING"); 
    instance.complain("ERROR");
    instance.complain("YES");

    return 0;
}