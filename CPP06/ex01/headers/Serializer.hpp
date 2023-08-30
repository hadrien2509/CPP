/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:48:41 by hadrien           #+#    #+#             */
/*   Updated: 2023/08/30 13:06:59 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <ctime>

struct Data
{
    std::string	s1;
    int			n;
    std::string	s2;
};

class Serializer
{
    public:
        Serializer(void);
        Serializer(Serializer const &src);
        ~Serializer(void);
        Serializer& operator=(Serializer const &rhs);

        void*		serialize(void);
        Data*		deserialize(void* raw);
};

#endif