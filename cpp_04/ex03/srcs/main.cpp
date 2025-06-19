/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:25:38 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/19 10:04:51 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// int main(void)
// {
// 	IMateriaSource* src = new MateriaSource();
// 	Ice *ice = new Ice();
// 	Cure *cure = new Cure();
// 	src->learnMateria(ice);
// 	src->learnMateria(cure);

// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;
// 	delete ice;
// 	delete cure;

// 	return 0;
// }

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

void separator(const std::string& title) {
	std::cout << "\n==================== " << title << " ====================\n" << std::endl;
}

int main(void) {
	separator("Création et apprentissage des materias");

	MateriaSource* source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	separator("Création d’un personnage et équipement");

	Character* me = new Character("Guillaume");

	AMateria* tmp1 = source->createMateria("ice");
	AMateria* tmp2 = source->createMateria("cure");
	me->equip(tmp1);
	me->equip(tmp2);

	separator("Utilisation des materias");

	Character* bob = new Character("Bob");
	me->use(0, *bob);
	me->use(1, *bob);

	separator("Remplissage complet de l'inventaire");

	me->equip(source->createMateria("ice"));
	me->equip(source->createMateria("cure"));
	me->equip(source->createMateria("cure")); // should fail, inventory full

	separator("Test de unequip + gestion mémoire");

	AMateria* to_reuse = source->createMateria("ice");
	me->equip(to_reuse);
	me->unequip(3);
	delete to_reuse;

	separator("Test double unequip / mauvaise indexation");

	me->unequip(3);
	me->use(3, *bob); //should do nothing

	separator("Test clone");

	AMateria* cloned = tmp1->clone();
	me->equip(cloned);
	me->use(3, *bob);

	separator("Nettoyage");

	delete bob;
	delete me;
	delete source;

	return 0;
}

