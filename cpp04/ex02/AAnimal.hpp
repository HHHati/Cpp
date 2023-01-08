/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:24:13 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 17:12:42 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
#include "Brain.hpp"

class AAnimal{

	public:

		AAnimal();
		AAnimal(const AAnimal& from);
		virtual ~AAnimal();

		AAnimal& operator=(const AAnimal& from);

		virtual void makeSound() const = 0;
		const std::string getType() const;

	protected:

		std::string _type;

};

#endif