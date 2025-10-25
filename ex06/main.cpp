/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:16:03 by sesimsek          #+#    #+#             */
/*   Updated: 2025/10/25 11:32:08 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char **av)
{
	if(ac != 2)
		{std::cout << "Use valid arguments ./harlFilter <DEBUG or INFO or WARNING or ERROR>\n"; return(1);}
	std::string choose = av[1]; 
	//if(choose == "DEBUG" || choose == "INFO" || choose == "WARNING" || choose == "ERROR")
	//	continue;
	//else
	//	{std::cout << "Your complain is bullshit!\n"; return(1);}
	Harl harl;
	harl.complain(av[1]);

	return(0);
}