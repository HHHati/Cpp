/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:12:22 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 13:46:50 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	public:
		Fixed(void);
		Fixed(const Fixed& from);
		~Fixed(void);
		Fixed& operator=(const Fixed& from);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int _value;
		static const int _bits = 8;
		
};

#endif