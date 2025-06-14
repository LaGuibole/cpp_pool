/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: GP <GP@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:16:22 by GP                #+#    #+#             */
/*   Updated: 2025/06/14 19:50:56 by GP               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Colors.hpp"

int main (void)
{
    ClapTrap trap1("ZOZO");

    trap1.takeDamage(5);
    trap1.beRepaired(3);
    trap1.attack("TOTO");

    ClapTrap trap2("ZAZA");
    
    trap2.takeDamage(11);
    trap2.beRepaired(2);
    trap2.attack("TATA");
    return 0;
}