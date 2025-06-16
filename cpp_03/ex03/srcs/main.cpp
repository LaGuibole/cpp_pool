/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:16:22 by GP                #+#    #+#             */
/*   Updated: 2025/06/16 16:05:52 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include "Colors.hpp"

int main (void)
{
    std::cout << LINE << std::endl;
    std::cout << CONSTRUCTOR << std::endl;
    std::cout << LINE << std::endl;

    ClapTrap trap1("CLAPTRAP 1");

    std::cout << LINE << std::endl;
    std::cout << CLAPTRAP << std::endl;
    std::cout << LINE << std::endl;

    trap1.printStats();
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

    trap2.printStats();
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

    scav.printStats();
    scav.takeDamage(5);
    scav.beRepaired(3);
    scav.attack("SCAVTRAP TARGET");
    scav.guardGate();

    std::cout << LINE << std::endl;
    std::cout << CONSTRUCTOR << std::endl;
    std::cout << LINE << std::endl;

    FragTrap frag("FRAGTRAP");

    std::cout << LINE << std::endl;
    std::cout << FRAGTRAP << std::endl;
    std::cout << LINE << std::endl;

    frag.printStats();
    frag.takeDamage(60);
    frag.beRepaired(43);
    frag.attack("FRAGTRAP TARGET");
    frag.highFiveGuys();

    std::cout << LINE << std::endl;
    std::cout << CONSTRUCTOR << std::endl;
    std::cout << LINE << std::endl;

    DiamondTrap diamond("Shine Bright");

    std::cout << LINE << std::endl;
    std::cout << DIAMONDTRAP << std::endl;
    std::cout << LINE << std::endl;

    diamond.printStats();
    diamond.takeDamage(3);
    diamond.beRepaired(2);
    diamond.attack("DIAMOND TARGET");
    diamond.whoAmI();

    std::cout << LINE << std::endl;
    std::cout << DESTRUCTOR << std::endl;
    std::cout << LINE << std::endl;

    return 0;
}
