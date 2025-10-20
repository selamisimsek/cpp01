/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:37:07 by sesimsek          #+#    #+#             */
/*   Updated: 2025/10/20 20:44:54 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	zombieName = name;
}

Zombie::Zombie()
{
	zombieName = "Unnamed Zombie";
}

Zombie::~Zombie()
{
	std::cout << zombieName << " is destroyed!" << std::endl;
}

void Zombie::announce()
{
	std::cout << zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name , int N)
{
	std::stringstream ss;
	ss << N;
	zombieName = name + "[" +  ss.str() + "]";
}
