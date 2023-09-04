/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:59:53 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/04 10:56:08 by hgeissle         ###   ########.fr       */
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
	typename T::iterator it = find(container.begin(), container.end(), value);
	
	if (it == container.end())
		throw std::exception();
	return it;
}

#endif