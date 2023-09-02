/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:59:53 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/02 16:52:28 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <deque>
# include <list>
# include <vector>


template <typename T>

typename T::iterator easyfind(T& container, int value)
{
	typename T::itearator it = find(container.begin(), container.end(), n);
	
	if (it == container.end())
		throw 
}

#endif