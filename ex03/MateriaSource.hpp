/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:10:46 by hiono             #+#    #+#             */
/*   Updated: 2024/06/27 18:33:45 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_MATERIA_SOURCE_HPP
# define H_MATERIA_SOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &rhs);
	MateriaSource &operator=(const MateriaSource &rhs);
	~MateriaSource();
	AMateria	*getMateria(int idx) const;
	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
	void		forgetMateria(int idx);

private:
	AMateria	*_memory[4];
	void		clearMemories();
};

#endif
