/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:39:31 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/29 15:53:37 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <map>
# include <string>
# include <algorithm>

class BitcoinExchange{

	public:

		BitcoinExchange();
		BitcoinExchange(const std::string &filename);
		BitcoinExchange(const BitcoinExchange& from);
		~BitcoinExchange();

		BitcoinExchange& operator=(const BitcoinExchange& from);

		void 	readData(const std::string &filename);
		double	getExchangeRate(const std::string &date);
		bool	isValidDate(const std::string& date);
		bool	isValidValue(const double &value);


	private:
	
		std::map<std::string, double> _data;
};

#endif