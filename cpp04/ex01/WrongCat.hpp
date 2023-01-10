/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:53:20 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 13:57:01 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	public:

		WrongCat();
		WrongCat(const WrongCat& from);
		~WrongCat();

		WrongCat& operator=(const WrongCat& from);

		virtual void makeSound() const;

};

#endif