/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:09:53 by sesimsek          #+#    #+#             */
/*   Updated: 2025/10/25 13:53:22 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Your Arguments Not Valid ; Use ./copyfile <filename> <s1> <s2>" << std::endl;
		return(1);
	}
	const std::string filename = av[1];
	const std::string s1 = av[2];
	const std::string s2 = av[3];
	const std::string output_filename = filename + ".replace";

	std::ifstream source(filename.c_str());
	std::ofstream destination(output_filename.c_str());

	if(!source.is_open() || !destination.is_open())
	{
		std::cout << "Error opening fd\n"; 
		source.close(); destination.close();
		return (1);
	}
	std::string line;
	while(getline(source,line))
	{
		std::string::size_type pos = 0;
		while((pos = line.find(s1,pos)) != std::string::npos)
		{
			int len = s1.length();
			line.erase(pos,len);
			line.insert(pos,s2);
			pos = pos + s2.length();
		}	
		destination << line << std::endl;
	}
	source.close(); destination.close();
	return (0);
}