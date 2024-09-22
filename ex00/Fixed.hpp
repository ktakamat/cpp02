/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:44:28 by machi             #+#    #+#             */
/*   Updated: 2024/09/14 12:52:08 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	private:
			int	value;
			static const int	bits = 8;
	public:
			Fixed();
			Fixed(const Fixed &other);
			~Fixed();

			Fixed &operator=(const Fixed &other);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
};

#endif