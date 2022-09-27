/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:19:36 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 17:19:36 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Construsctor Brain called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Deconstrusctor Brain called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
	for(size_t i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

std::string* Brain::getIdeas()
{
	return (this->ideas);
}