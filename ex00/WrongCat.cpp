/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:55:17 by hiono             #+#    #+#             */
/*   Updated: 2024/06/25 18:23:53 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat " << _type << " is constructed" << "\n";
}

WrongCat::WrongCat(WrongCat &rhs)
{
	_type = rhs.getType();
}

WrongCat &WrongCat::operator=(WrongCat &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << _type << " is destructed" << "\n";
}
