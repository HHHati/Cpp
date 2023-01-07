/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:17:02 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 23:19:46 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& from);
		~FragTrap(void);

		FragTrap& operator=(const FragTrap& from);

		void attack(const std::string& target);
		void highFiveGuys(void);
};

#endif