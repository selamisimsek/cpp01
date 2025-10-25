/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:40:39 by sesimsek          #+#    #+#             */
/*   Updated: 2025/10/25 11:15:29 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string level;

	while(1)
	{
		std::cout << "       Choose What Do You Do?       \n";
		std::cout << "[DEBUG] [INFO] [WARNING] [ERROR] or [EXIT]\n";
		if(std::getline(std::cin, level))
		{
            if (level == "EXIT")
                break;
            if(level == "DEBUG")
                std::cout << "Your Choose is DEBUG\n";
            else if(level == "INFO")
                std::cout << "Your Choose is INFO\n";
            else if(level == "WARNING")
                std::cout << "Your Choose is WARNING\n";
            else if(level == "ERROR")
                std::cout << "Your Choose is ERROR\n";
			else
				std::cout << "Your Choose is not valid!\n";
			harl.complain(level);
		}
		else
			exit(0);
	}
	return(0);
}
