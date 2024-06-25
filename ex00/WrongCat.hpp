/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:55:17 by hiono             #+#    #+#             */
/*   Updated: 2024/06/25 18:24:30 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_WRONG_CAT_HPP
# define H_WRONG_CAT_HPP

#include "WrongAnimal.hpp"
# include <iostream>

class	WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat &rhs);
	WrongCat &operator=(WrongCat &rhs);
	~WrongCat();
};

#endif
