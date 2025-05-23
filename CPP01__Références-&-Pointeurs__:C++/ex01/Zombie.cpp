/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waziz <waziz@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:19:20 by waziz             #+#    #+#             */
/*   Updated: 2024/05/13 23:13:04 by waziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(int i)
{
    i += 1;
    std::cout << name << " - " << i << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string n)
{
    name = n;
}

std::string Zombie::getName() const
{
    return (name);
}
