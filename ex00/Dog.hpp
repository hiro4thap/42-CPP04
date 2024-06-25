/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:55:17 by hiono             #+#    #+#             */
/*   Updated: 2024/06/25 18:06:24 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_DOG_HPP
# define H_DOG_HPP

#include "Animal.hpp"
# include <iostream>

class	Dog: public Animal
{
public:
	Dog();
	Dog(Dog &rhs);
	Dog &operator=(Dog &rhs);
	~Dog();
};

#endif
