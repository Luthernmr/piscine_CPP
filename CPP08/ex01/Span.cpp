/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:47:16 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/29 20:48:22 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
    std::cout << "Constructor Span called with a size: "<< std::endl;
};

Span::Span(const Span &obj)
{
    std::cout << "Copy Constructor Span called" << std::endl;
    *this = obj;
};

Span & Span::operator=(const Span &obj)
{
	this->_N = obj._N;
	this->_tab = obj._tab;
	return (*this);
};

Span::~Span()
{
    std::cout << "Deconstructor Span called" << std::endl;
};
	
void Span::addNumber(int N)
{
	std::vector<int>::iterator it;

	
	if (this->_tab.size() >= this->_N)
		throw std::logic_error("the maximum size has been reached");
	else
		this->_tab.push_back(N);
}

void Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator end)
{
	while (it != end)
	{
		if ((unsigned int)(this->_tab.size()) <= _N)
		{
			this->_tab.push_back(*it);
		}
		it++;
	}
	if (it != end)
		throw std::logic_error("the maximum size has been reached");
}

unsigned int Span::longestSpan()
{
	if (this->_N < 2)
		throw std::logic_error("You need minimum 2 elements");
	return (*std::max_element(this->_tab.begin(), this->_tab.end()) - *std::min_element(this->_tab.begin(), this->_tab.end()));
}

unsigned int Span::shortestSpan()
{
	std::vector<int>::iterator it;
	
	if (this->_N < 2)
		throw std::logic_error("You need minimum 2 elements");
	sort(this->_tab.begin(), this->_tab.end());
	unsigned int tmp;
	tmp = 4294967295;
	for (it = this->_tab.begin(); it < this->_tab.end(); ++it)
	{
		if (tmp > (unsigned int)(*(it + 1) - *it))
			tmp = (unsigned int)(*(it + 1) - *it);
	}
	//std::cout << *(it + 1) << *it << "\n";
	return (tmp);
}

void Span::displaySpan()
{
	for (unsigned int i = 0; i < this->_tab.size(); i++)
		std::cout << "[" << this->_tab[i] << "]";
	std::cout << std::endl;
}