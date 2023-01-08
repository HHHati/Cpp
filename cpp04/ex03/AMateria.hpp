/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:17:00 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 18:37:47 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria{

	public:

		AMateria(std::string const & type);
		AMateria(const AMateria& from);
		virtual ~AMateria();

		AMateria& operator=(const AMateria& from);

		std::string const&  getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:

		std::string _type;

};

#endif