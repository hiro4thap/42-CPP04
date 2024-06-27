/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:10:41 by hiono             #+#    #+#             */
/*   Updated: 2024/06/27 18:43:19 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_memory[i] = NULL;
	std::cout << "MateriaSource is constructed" << "\n";
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	clearMemories();
	for (int i = 0; i < 4; i++)
	{
		if (!_memory[i])
			continue ;
		_memory[i] = rhs.getMateria(i);
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

MateriaSource::~MateriaSource()
{
	clearMemories();
	std::cout << "MateriaSource is destructed" << "\n";
}
	
AMateria	*MateriaSource::getMateria(int idx) const
{
	return _memory[idx];
}

void		MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i])
			continue ;
		_memory[i] = m; 
		if (_memory[i])
		return ;
	}
	std::cout << "Memories are full in MemorySource" << "\n";
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_memory[i] || _memory[i]->getType() != type)
			continue ;
		return _memory[i]->clone();
	}
	std::cout << "Cannot find type " << type << " in memories"  << "\n";
	return 0;
}

void	MateriaSource::clearMemories()
{
	for (int i = 0; i < 4; i++)
	{
		if (!_memory[i])
			continue ;
		delete _memory[i];
		_memory[i] = NULL;
	}
}

void	MateriaSource::forgetMateria(int idx)
{
	if (!_memory[idx])
	{
		std::cout << "MateriaSource does not set materia in memories " << idx << "\n";
		return ;
	}
	delete _memory[idx];
	_memory[idx] = NULL;
}
