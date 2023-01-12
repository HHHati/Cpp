/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:18:41 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/12 15:42:32 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(std::string param) : _param(param)
{
}

Conversion::Conversion(const Conversion& from)
{
}

Conversion::~Conversion()
{
}

Conversion& Conversion::operator=(const Conversion& from)
{
}

char	Conversion::convertChar() const


int	Conversion::convertInt() const


float	Conversion::convertFloat() const


double	Conversion::convertDouble() const

