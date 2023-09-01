/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:55:01 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/01 17:17:36 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/iter.hpp"

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main(void)
{
	int				array1[5] = {1, 2, 3, 4, 5};
	std::string		array2[5] = {"one", "two", "three", "four", "five"};
	double			array3[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	// Awesome tab2[5];

	iter(array1, 5, &print);
	iter(array2, 5, &print);
	iter(array3, 5, &print);
	// iter( tab2, 5, &print);
}
