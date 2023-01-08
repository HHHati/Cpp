/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:30:03 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 16:07:37 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal{

	public:

		Cat();
		Cat(const Cat& from);
		~Cat();

		Cat& operator=(const Cat& from);

		virtual void makeSound() const;
		void setIdea(int i, std::string idea);
		const std::string& getIdea(int i) const;

	private:

		Brain *_brain;

};

#endif