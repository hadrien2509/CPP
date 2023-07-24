/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:41:29 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/24 19:42:24 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceContent.hpp"

int	main(int ac, char **av)
{
	std::ifstream		inputFile;
	std::ofstream		outputFile;
	std::string			content;
	std::string			line;
	// replaceContent		instance;
	const std::string	s1 = av[2];
	const std::string	s2 = av[3];

	if (ac != 4)
		return -1;
	inputFile.open(av[1]);
	std::string	filename = av[1];
	filename.append(".replace");
	outputFile.open(filename);
	while (std::getline(inputFile, line))
	{
		content.append(line);
		if (!inputFile.eof())
			content.append("\n");
	}
	// instance.repContent(content, s1, s2);
	outputFile << content;
}