/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:51:30 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/25 17:47:36 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl	instance;

    instance.complain("ERROR"); // Output: Function 2
    instance.complain("INFO"); // Output: Function 4
    instance.complain("DEBUG"); // Output: Invalid level: level5

    return 0;
}