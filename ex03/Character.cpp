/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:24:19 by hiono             #+#    #+#             */
/*   Updated: 2024/06/27 18:42:04 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() :_name("aaaa")
{
	std::cout << "Character " << _name << " is constructed" << "\n";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_trash[i] = NULL;
}

Character::Character(std::string name) :_name(name)
{
	std::cout << "Character " << _name << " is constructed" << "\n";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &rhs)
{
	_name = rhs.getName();
	clearInventory();
	for (int i = 0; i < 4; i++)
		_inventory[i] = rhs.getInventory(i);
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		clearInventory();
		*this = rhs;
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character " << _name << " is destructed" << "\n";
	clearInventory();
	clearTrash();
}

std::string const &Character::getName() const
{
	return _name;
}

AMateria *Character::getInventory(int index) const
{
	return _inventory[index];
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			continue ;
		_inventory[i] = m;
		return ;
	}
	std::cout << _name << "'s inventory is full and cannot store " << m->getType() << "\n";
}

void Character::unequip(int idx)
{
	if (!_inventory[idx])
	{
		std::cout << _name << " does not set materia in inventory " << idx << "\n";
		return ;
	}
	for (int i = 0; i < 100; i++)
	{
		if (_trash[i])
			continue ;
		_trash[i] = _inventory[i];
		_inventory[i] = NULL;
		return ;
	}
	std::cout << "trahs is full" << "\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (!_inventory[idx])
	{
		std::cout << _name << " does not set materia in inventory " << idx << "\n";
		return ;
	}
	_inventory[idx]->use(target);
}

void Character::clearInventory()
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
			continue ;
		delete _inventory[i];
		_inventory[i] = NULL;
	}
}

void Character::clearTrash()
{
	for (int i = 0; i < 100; i++)
	{
		if (!_trash[i])
			continue ;
		delete _trash[i];
		_trash[i] = NULL;
	}
}

