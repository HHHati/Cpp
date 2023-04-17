/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:18:41 by bade-lee          #+#    #+#             */
/*   Updated: 2023/04/17 14:25:11 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(const std::string& param) : _param(param)
{
}

Conversion::Conversion(const Conversion& from)
{
	*this = from;
}

Conversion::~Conversion()
{
}

Conversion& Conversion::operator=(const Conversion& from)
{
	(void) from;
	return *this;
}

void	Conversion::convert()
{
	const char	c_param = convertChar();
	const int	i_param = convertInt();
	const float	f_param = convertFloat();
	const double	d_param = convertDouble();

	if (f_param < CHAR_MIN || f_param > CHAR_MAX || isnan(f_param))
		std::cout << "char: impossible" << std::endl;
	else if (isprint(c_param))
		std::cout << "char: '" << c_param << "'" << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	if (i_param < INT_MIN || i_param > INT_MAX || isnan(f_param))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i_param << std::endl;
	if (f_param - i_param == 0)
	{
		std::cout << "float: " << f_param << ".0f" << std::endl;
		std::cout << "double: " << d_param << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << f_param << "f" << std::endl;
		std::cout << "double: " << d_param << std::endl;
	}
}

char	Conversion::convertChar()
{
	return static_cast<char>(convertFloat());
}


int	Conversion::convertInt()
{
	return static_cast<int>(convertFloat());
}


float	Conversion::convertFloat()
{
 return atof(this->_param.c_str());
}


double	Conversion::convertDouble()
{
	return static_cast<double>(convertFloat());
}

