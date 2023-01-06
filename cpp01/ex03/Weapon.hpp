/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:46:44 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/06 20:21:38 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

	public:
		Weapon(std::string name);
		~Weapon(void);

		std::string const & getType(void) const;
		void	setType(std::string type);

	private:
		std::string _type;
};

#endif