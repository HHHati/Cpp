/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:12:22 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 18:27:08 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	public:

		Fixed(void);
		Fixed(int nb);
		Fixed(float nb);
		Fixed(const Fixed& from);
		~Fixed(void);

		Fixed& operator=(const Fixed& from);

		bool operator>(const Fixed& from) const;
		bool operator<(const Fixed& from) const;
		bool operator>=(const Fixed& from) const;
		bool operator<=(const Fixed& from) const;
		bool operator==(const Fixed& from) const;
		bool operator!=(const Fixed& from) const;

		Fixed operator+(const Fixed& from);
		Fixed operator-(const Fixed& from);
		Fixed operator*(const Fixed& from);
		Fixed operator/(const Fixed& from);

		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed min(Fixed& a, Fixed& b);
		static const Fixed min(const Fixed& a, const Fixed& b);
		static Fixed max(Fixed& a, Fixed& b);
		static const Fixed max(const Fixed& a, const Fixed& b);

	private:

		int _value;
		static const int _bits = 8;
		
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);


#endif