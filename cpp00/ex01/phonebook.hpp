/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:05:22 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/11 13:09:05 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class phonebook {

	public:
		phonebook(void);
		~phonebook(void);

		contact &getContact(int index);
		void	setContact(contact contact, int index);

	private:

		contact	_repertory[8];

};

#endif