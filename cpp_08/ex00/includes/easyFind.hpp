/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:13:25 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/01 11:33:33 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <stdexcept>

class easyFind{
	public:
		class OccurenceNotFoundException : public std::exception{
			public:
				const char* what() const throw();
		};
};

#include "easyFind.tpp"
