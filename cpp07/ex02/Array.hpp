/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:36:37 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/04 13:36:44 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T> class Array{

	public:

		Array()
		{
			_size = 0;
			_array = NULL;
		}
		Array(unsigned int size) : _size(size)
		{
			_array = new T[size];
			for (size_t i = 0; i < size; i++)
				_array[i] = 0;
		}
		Array(Array& from)
		{
			_size = from.GetSize();
			_array = new T[_size];
			for (size_t i = 0; i < _size; ++i)
			_array[i] = from[i];
		}
		virtual ~Array()
		{
			if (_size)
				delete [] _array;
		}
		Array& operator=(const Array& from)
		{
			if (!_size)
				delete [] _array;
			_size = from.GetSize();
			_array = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_array[i] = from[i];
			return *this;
		}
		unsigned int	GetSize(void) const
		{
			return _size;
		}
		T &operator[](unsigned int index) const
		{
			if (index > _size - 1)
				throw Error();
			return _array[index];
		}
		class Error : public std::exception {
			public:
				virtual const char * what() const throw()
				{
					return ("Array::Error");
				}
		};

	private:

		unsigned int	_size;
		T				*_array;

};

#endif