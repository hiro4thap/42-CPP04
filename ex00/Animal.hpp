/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:15:18 by hiono             #+#    #+#             */
/*   Updated: 2024/06/25 18:16:14 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ANIMAL_HPP
# define H_ANIMAL_HPP

# include <iostream>

class	Animal
{
public:
	Animal();
	Animal(std::string type);
	Animal(Animal &rhs);
	Animal &operator=(Animal &rhs);
	~Animal();
	void		makeSound() const;
	std::string	getType() const;
	void		setType(std::string type);

protected:
	std::string	_type;
};

#endif
