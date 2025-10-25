/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:32:57 by sesimsek          #+#    #+#             */
/*   Updated: 2025/10/25 13:32:08 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month\n" << std::endl;
}
void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG" ,"INFO" ,"WARNING" , "ERROR"};
    
    int caseNumber = 0;
    for(int i = 0; i < 4; i++)
    {
        if(levels[i] == level)
        {
            caseNumber = i;
            break;
        }
        else
            caseNumber = 4;
    }

    switch (caseNumber)
    {
    case 0:
        std::cout << "[ DEBUG ]\n";
        debug();
    case 1:
        std::cout << "[ INFO ]\n";
        info();
    case 2:
        std::cout << "[ WARNING ]\n";
        warning();
    case 3:
        std::cout << "[ ERROR ]\n";
        error();
            break;
    default:
        std::cout << "[ Your complain is bullshit! Fuckk off!]\n";
        break;
    }
}