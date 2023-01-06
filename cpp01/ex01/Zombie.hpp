/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:31:15 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/06 19:05:59 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);

	private:
		std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif