/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:31:15 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/06 18:29:42 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);

	private:
		std::string name;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif