/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:13:43 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/12 16:17:15 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain{

	public:

		Brain();
		Brain(const Brain& from);
		~Brain();

		Brain& operator=(const Brain& from);

		void setIdea(int i, std::string idea);
		const std::string& getIdea(int i) const;

	private:

		std::string _ideas[100];

};

#endif