/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:55:17 by hiono             #+#    #+#             */
/*   Updated: 2024/06/25 18:11:39 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog " << _type << " is constructed" << "\n";
}

Dog::Dog(Dog &rhs)
{
	_type = rhs.getType();
}

Dog &Dog::operator=(Dog &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog " << _type << " is destructed" << "\n";
}
