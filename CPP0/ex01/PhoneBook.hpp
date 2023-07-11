/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:07:00 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/11 17:36:21 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook {

private:

	void move_contacts(void);
	void print_column(char *str);
	Contact	array[8];

public:

	int		nbr_of_contacts;

	void	add_contact(void);
	void	search_contact(void);
};

#endif