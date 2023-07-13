/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:07:00 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/13 18:23:52 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# define MSG_SEPARATOR "|----------|----------|----------|----------|"

class PhoneBook {

private:

	void	_print_contacts(void);
	void	_print_header(void);
	void 	_move_contacts(void);
	void 	_print_column(std::string str);
	bool	_string_is_num(std::string str);
	Contact	array[8];

public:

	int		nbr_of_contacts;

	void	add_contact(void);
	void	search_contact(void);
};

#endif