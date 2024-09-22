/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:26:32 by machi             #+#    #+#             */
/*   Updated: 2024/09/17 16:14:16 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
private:
	int value;
	static const int fractionalBits = 8;

public:
	Fixed();
	Fixed(const int int_val);
	Fixed(const float float_val);
	Fixed(const Fixed &other);
	Fixed& operator=(const Fixed &other);
	~Fixed();

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif