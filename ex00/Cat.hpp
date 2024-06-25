/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:55:17 by hiono             #+#    #+#             */
/*   Updated: 2024/06/25 18:06:40 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_CAT_HPP
# define H_CAT_HPP

#include "Animal.hpp"
# include <iostream>

class	Cat: public Animal
{
public:
	Cat();
	Cat(Cat &rhs);
	Cat &operator=(Cat &rhs);
	~Cat();
};

#endif
