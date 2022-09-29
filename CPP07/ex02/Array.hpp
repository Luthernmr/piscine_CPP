/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:26:15 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/28 16:01:07 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */ 

template <class T> class Array
{
	private:
		T* _tab;
		int _size;
	public:
		Array() : _size(0)
		{
			this->_tab = NULL;
		}
		
		Array(unsigned int n)
		{
			this->_tab = new T[n];
			this->_size = n;
		}
		
		Array(const Array &obj)
		{
			this->_tab = new T[obj._size];
			this->_size = obj._size;
			for (int i = 0; i < obj._size; i++)
				this->_tab[i] = obj._tab[i];
		}
		~Array(){
			delete []this->_tab;
		};
		
		Array &operator=(const Array &obj)
		{
			delete []this->_tab;
			this->_tab = new T[obj._size];
			this->_size = obj._size;
			for (int i = 0; i < obj._size; i++)
				this->_tab[i] = obj._tab[i];
			return (*this);
		}
		
		T &operator[](int i)
		{
			if (i < 0 || i >= this->_size)
				throw std::logic_error("index is invalid");
			return (this->_tab[i]);
		};
		
		const T &operator[](int i)const
		{
			if (i < 0 || i >= this->_size)
				throw std::logic_error("index is invalid");
			return (this->_tab[i]);
		};
		
		int size()
		{
			return (_size);
		};
};