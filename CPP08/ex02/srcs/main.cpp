/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:42:46 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/05 17:24:32 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/MutantStack.hpp"

int main()
{
	std::cout << "\nMutantStack:\n" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		std::cout << "size: " << mstack.size() << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "stack: ";
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		std::stack<int> s(mstack);
	}
	std::cout << "\nList:\n" << std::endl;
	{
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << "top: " << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << "size: " << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);
		std::cout << "size: " << mlist.size() << std::endl;
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		std::cout << "stack: ";
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	return 0;
}