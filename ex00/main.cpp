/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:22:22 by sesimsek          #+#    #+#             */
/*   Updated: 2025/10/20 19:35:01 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("Stack Zombie");

	Zombie* heapZombie =  newZombie("Heap Zombie");
	heapZombie->announce();
	delete heapZombie;

	return(0);
}
