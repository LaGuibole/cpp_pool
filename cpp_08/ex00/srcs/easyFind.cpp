/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:28:16 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/01 11:30:07 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

const char* easyFind::OccurenceNotFoundException::what() const throw()
{
	return "This occurence was not to be found in the container";
}

