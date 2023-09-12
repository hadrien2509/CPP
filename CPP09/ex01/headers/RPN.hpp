/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:28:50 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/12 19:02:22 by hgeissle         ###   ########.fr       */
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

		void _selectOperation(std::string);

	public:
        RPN();
        ~RPN();
        RPN(const RPN &);
        RPN& operator=(const RPN &);

        std::stack<int> answer;
		int reversePolishNation(std::string);
};

#endif