/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceContent.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:34:34 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/24 18:52:31 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceContent.hpp"

void	replaceContent::repContent(std::string &content, const std::string s1, const std::string s2)
{
	long	i = 0;

	while (1)
	{
		i = content.find(s1, i);
		if (i == -1)
			break ;
		content.erase(i, s1.length());
		content.insert(i + s1.length(), s2);
	}
}