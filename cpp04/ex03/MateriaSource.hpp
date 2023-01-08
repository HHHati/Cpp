/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:20:50 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 20:00:22 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{

	public:

		MateriaSource();
		MateriaSource(const MateriaSource& from);
		~MateriaSource();

		MateriaSource& operator=(const MateriaSource& from);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

	private:

		AMateria * _mem[4];

};

#endif