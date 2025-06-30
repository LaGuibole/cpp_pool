/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:18:13 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/30 15:49:19 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>

class Base{
	public:
		virtual ~Base();
	};

Base* generate();
void identify(Base* p);
void identify(Base& p);
