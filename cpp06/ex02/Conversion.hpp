/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:18:43 by bade-lee          #+#    #+#             */
/*   Updated: 2023/04/17 14:21:59 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <cmath>

class Conversion{

	public:

		Conversion(const std::string& param);
		Conversion(const Conversion& from);
		~Conversion();

		Conversion& operator=(const Conversion& from);

		void	convert();
		char	convertChar();
		int		convertInt();
		float	convertFloat();
		double	convertDouble();

	private:

		std::string _param;

};

#endif