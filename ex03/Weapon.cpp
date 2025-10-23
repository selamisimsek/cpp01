/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesimsek <sesimsek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:37:39 by sesimsek          #+#    #+#             */
/*   Updated: 2025/10/23 20:46:51 by sesimsek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(const std::string newType)
{
	type = newType;
}
const std::string Weapon::getType() const
{
	return(type);
}

Weapon::Weapon(const std::string type)
{
	this->type = type;
}