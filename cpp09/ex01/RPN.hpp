/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:09:53 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/29 16:43:46 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <stack>

class RPN{

	public:

		RPN();
		RPN(const RPN& from);
		~RPN();

		RPN& operator=(const RPN& from);

		bool isValid(const std::string arg);
		void calculate(const std::string arg);


	private:

		std::stack<double> _numbers;

};

#endif