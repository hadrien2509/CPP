/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:48:41 by hadrien           #+#    #+#             */
/*   Updated: 2023/09/01 18:59:20 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include "Data.hpp"

class Serializer
{
	private:
        Serializer(void);
        Serializer(Serializer const &src);
        ~Serializer(void);
        Serializer& operator=(Serializer const &rhs);
    public:

        static uintptr_t	serialize(Data *ptr);
        static Data*		deserialize(uintptr_t raw);
};

#endif