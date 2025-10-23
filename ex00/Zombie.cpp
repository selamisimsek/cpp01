/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:21:21 by sesimsek          #+#    #+#             */
/*   Updated: 2025/10/20 19:00:34 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	zombieName = name;
}

Zombie::~Zombie()
{
	std::cout << zombieName << " is destroyed!" << std::endl;
}

void Zombie::announce()
{
	std::cout << zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}