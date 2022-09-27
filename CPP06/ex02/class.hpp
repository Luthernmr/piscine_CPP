/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:20:01 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/27 11:42:49 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

class Base
{
	public :
		virtual ~Base();
};

Base::~Base(){};

class A : public Base {};
class B : public Base {};
class C : public Base {};