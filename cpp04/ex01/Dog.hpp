/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:30:00 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/12 16:16:26 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{

	public:

		Dog();
		Dog(const Dog& from);
		virtual ~Dog();

		Dog& operator=(const Dog& from);

		virtual void makeSound() const;
		void setIdea(int i, std::string idea);
		const std::string& getIdea(int i) const;

	private:

		Brain *_brain;

};

#endif