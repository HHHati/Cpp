/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:33:52 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 12:56:24 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{

	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& from);
		~ScavTrap(void);

		ScavTrap& operator=(const ScavTrap& from);

		void attack(const std::string& target);
		void guardGate();
};

#endif