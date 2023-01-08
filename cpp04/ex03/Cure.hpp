/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:22:32 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 20:17:30 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria{

	public:

		Cure();
		Cure(std::string const & type);
		Cure(const Cure& from);
		~Cure();

		Cure& operator=(const Cure& from);

		AMateria* clone() const;
		void use(ICharacter& target);

};

#endif