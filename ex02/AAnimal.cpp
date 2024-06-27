/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:21:40 by hiono             #+#    #+#             */
/*   Updated: 2024/06/27 12:07:44 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "blank";
	std::cout << "AAnimal " << _type << " is constructed" << "\n";
}

AAnimal::AAnimal(std::string type)
{
	_type = type;
	std::cout << "AAnimal " << _type << " is constructed" << "\n";
}

AAnimal::AAnimal(const AAnimal &rhs)
{
	_type = rhs.getType();
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal " << _type << " is destructed" << "\n";
}

void		AAnimal::makeSound() const
{
	if (_type == "Cat")
		std::cout << "Miaooowwwwww" << "\n";
	else if (_type == "Dog")
		std::cout << "Wooooof" << "\n";
	else
		std::cout << "No onomatopoia for this animal" << "\n";
}

std::string	AAnimal::getType() const
{
	return _type;
}

void		AAnimal::setType(std::string type)
{
	_type = type;
}
