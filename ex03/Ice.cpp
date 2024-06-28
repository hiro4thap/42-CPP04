/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:36:44 by hiono             #+#    #+#             */
/*   Updated: 2024/06/28 13:50:40 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice " << _type << " is construced" << "\n";
}

Ice::Ice(const Ice &rhs)
{
	_type = rhs.getType();
}

Ice &Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice " << _type << " is destruced" << "\n";
}

Ice 	*Ice::clone() const
{
	Ice *clone = new Ice();
	return clone;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "\033[1;31m* shoots an ice bolt at " << target.getName() << " *\033[0m" << "\n";
}
