/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:30:03 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/12 16:16:21 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal{

	public:

		Cat();
		Cat(const Cat& from);
		virtual ~Cat();

		Cat& operator=(const Cat& from);

		virtual void makeSound() const;
		void setIdea(int i, std::string idea);
		const std::string& getIdea(int i) const;

	private:

		Brain *_brain;

};

#endif