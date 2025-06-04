/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 10:37:56 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/04 11:05:42 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <iomanip>

class Fixed
{
	private:
		int value;
		const static int bits;
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed& operator=(const Fixed& copy);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif
