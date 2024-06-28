/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:01:41 by hiono             #+#    #+#             */
/*   Updated: 2024/06/28 14:44:50 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void	mandatory(void)
{
	std::cout << "\033[1;31m[ Mandatory Test ]\033[0m" << "\n";
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

	delete bob;
	delete me;
	delete src;
}

void	materia(void)
{
	std::cout << "\033[1;31m[ Materia Test ]\033[0m" << "\n";
	std::cout << "\033[1;31m[ Construct Materia and use them ]\033[0m" << "\n";
	Character Aden("Aden");
	IMateriaSource* src = new MateriaSource();
	AMateria *ice = new Ice();
	std::cout << "\033[1;31mtype name of ice instance: " << ice->getType() << "\033[0m" << "\n";
	ice->use(Aden);
	AMateria *cure = new Cure();
	std::cout << "\033[1;31mtype name of cure instance: " << cure->getType() << "\033[0m" << "\n";
	cure->use(Aden);

	std::cout << "\n";
	std::cout << "\033[1;31m[ Set Materias to MateriaSource ]\033[0m" << "\n";
	src->learnMateria(ice->clone());
	src->learnMateria(cure->clone());
	src->learnMateria(ice->clone());
	src->learnMateria(cure->clone());
	src->learnMateria(ice);
	delete ice;
	delete cure;

	std::cout << "\n";
	std::cout << "\033[1;31m[ Create materias from MateriaSource ]\033[0m" << "\n";
	ice = src->createMateria("ice");
	std::cout << "\033[1;31mreturn value: " << ice << "\033[0m" << "\n";
	std::cout << "\033[1;31mreturned materia's type: " << ice->getType() << "\033[0m" << "\n";
	std::cout << "\n";
	cure = src->createMateria("cure");
	std::cout << "\033[1;31mreturn value: " << cure << "\033[0m" << "\n";
	std::cout << "\033[1;31mreturned materia's type: " << cure->getType() << "\033[0m" << "\n";
	std::cout << "\n";
	AMateria *blank = src->createMateria("blank");
	std::cout << "\033[1;31mreturn value: " << blank << "\033[0m" << "\n";
	std::cout << "\n";
	std::cout << "\033[1;31m[ Destruct ]\033[0m" << "\n";
	delete src;
	delete ice;
	delete cure;
}

void	chara(void)
{
	std::cout << "\033[1;31m[ Character Test ]\033[0m" << "\n";
	std::cout << "\033[1;31m[ Construct Character and equip, use Materia ]\033[0m" << "\n";
	Character Ardan("Ardan");
	Character Ben("Ben");
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	Ardan.use(0, Ben);
	Ardan.use(1, Ben);
	Ardan.use(2, Ben);
	Ardan.use(3, Ben);
	Ardan.equip(ice->clone());
	Ardan.equip(cure->clone());
	Ardan.equip(ice->clone());
	Ardan.equip(cure->clone());
	Ardan.equip(ice);
	Ardan.use(0, Ben);
	Ardan.use(1, Ben);
	Ardan.use(2, Ben);
	Ardan.use(3, Ben);

	std::cout << "\n";
	std::cout << "\033[1;31m[ Unequip Materias ]\033[0m" << "\n";
	Ardan.unequip(0);
	Ardan.unequip(0);
	Ardan.unequip(1);
	Ardan.unequip(2);
	Ardan.unequip(3);
	std::cout << "\n";
	Ardan.use(0, Ben);
	Ardan.use(1, Ben);
	Ardan.use(2, Ben);
	Ardan.use(3, Ben);

	std::cout << "\n";
	std::cout << "\033[1;31m[ Destruct ]\033[0m" << "\n";
	delete ice;
	delete cure;
}

int	main(void)
{
	mandatory();
	std::cout << "\n";
	materia();
	std::cout << "\n";
	chara();
	return 0;
}
