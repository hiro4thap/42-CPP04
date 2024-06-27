/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:01:41 by hiono             #+#    #+#             */
/*   Updated: 2024/06/27 18:43:48 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	//Character Ardan("Ardan");
	//Character Ben("Ben");
	//Ice *ice1 = new Ice();
	//Ice *ice2 = ice1->clone();
	//Cure *cure = new Cure();
	//Ardan.equip(ice1);
	//Ardan.equip(ice2);
	//Ardan.equip(cure);
	//Ardan.use(0, Ben);
	//Ardan.use(1, Ben);
	//Ardan.use(2, Ben);
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
