/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:18:43 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/12 15:45:16 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>

class Conversion{

	public:

		Conversion(std::string& param);
		Conversion(const Conversion& from);
		~Conversion();

		Conversion& operator=(const Conversion& from);

		char	convertChar() const;
		int		convertInt() const;
		float	convertFloat() const;
		double	convertDouble() const;

		class InvalidInput : public std::exception
			{
			public:
				const char* what() const throw()
				{
					return ("Invalid input");
				}
			};

			class Impossible : public std::exception
			{
			public:
				const char* what() const throw()
				{
					return ("Impossible");
				}
			};

			class NonDisplayable : public std::exception
			{
			public:
				const char* what() const throw()
				{
					return ("Non displayable");
				}
			};

	private:

		std::string _param;
		char		_char;
		int			_int;
		float		_float;
		double		_double;

};

#endif