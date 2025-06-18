/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:16:22 by GP                #+#    #+#             */
/*   Updated: 2025/06/18 12:29:18 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Colors.hpp"
#include "ScavTrap.hpp"

int main (void)
{
    std::cout << LINE << std::endl;
    std::cout << CONSTRUCTOR << std::endl;
    std::cout << LINE << std::endl;

    ClapTrap trap1("CLAPTRAP 1");

    std::cout << LINE << std::endl;
    std::cout << CLAPTRAP << std::endl;
    std::cout << LINE << std::endl;

    trap1.takeDamage(5);
    trap1.beRepaired(3);
    trap1.attack("TARGET 1");

    std::cout << LINE << std::endl;
    std::cout << CONSTRUCTOR << std::endl;
    std::cout << LINE << std::endl;

    ClapTrap trap2("CLAPTRAP 2");

    std::cout << LINE << std::endl;
    std::cout << CLAPTRAP << std::endl;
    std::cout << LINE << std::endl;

    trap2.takeDamage(11);
    trap2.beRepaired(2);
    trap2.attack("TARGET 2");

    std::cout << LINE << std::endl;
    std::cout << CONSTRUCTOR << std::endl;
    std::cout << LINE << std::endl;

    ScavTrap scav("SCAVTRAP");

    std::cout << LINE << std::endl;
    std::cout << SCAVTRAP << std::endl;
    std::cout << LINE << std::endl;
    scav.takeDamage(5);
    scav.beRepaired(3);
    scav.attack("SCAVTRAP TARGET");
    scav.guardGate();

    ScavTrap scav2(scav);
    scav2.takeDamage(5);
    scav2.beRepaired(3);
    scav2.attack("SCAVTRAP2 TARGET");
    scav2.guardGate();
    std::cout << LINE << std::endl;
    std::cout << DESTRUCTOR << std::endl;
    std::cout << LINE << std::endl;
    return 0;
}
