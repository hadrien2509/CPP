/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:28:50 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/10 17:02:11 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <algorithm>
# include <sstream>

class RPN
{
    private:
        RPN();
        ~RPN();
        RPN(const RPN &);
        const RPN & operator=(const RPN &);

    public:
        static std::stack<int> _numbers;
};

#endif