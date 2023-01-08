/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:52:52 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 20:21:10 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter{

	public:

		Character(std::string const & name);
		Character(const Character& from);
		~Character();

		Character& operator=(const Character& from);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:

		std::string _name;
		AMateria *_inv[4];
		AMateria *_floor[4];
		int _index;
		void	let(AMateria * m);

};

#endif