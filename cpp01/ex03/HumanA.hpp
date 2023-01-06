/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:46:29 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/06 20:20:26 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(std::string name, Weapon& Weapon);
		~HumanA(void);

		void	attack(void) const;

	private:
		std::string _name;
		Weapon& _weapon;
};

#endif