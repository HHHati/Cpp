/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:53:18 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/25 11:51:38 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal& from);
		virtual ~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& from);

		virtual void makeSound() const;
		const std::string getType() const;

	protected:

		std::string _type;

};

#endif