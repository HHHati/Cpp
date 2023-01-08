/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:22:27 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 20:17:24 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria{

	public:

		Ice();
		Ice(std::string const & type);
		Ice(const Ice& from);
		~Ice();

		Ice& operator=(const Ice& from);

		AMateria* clone() const;
		void use(ICharacter& target);

};

#endif