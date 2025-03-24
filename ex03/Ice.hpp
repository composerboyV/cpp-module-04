/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:08:32 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/24 16:20:44 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
	private:
		std::string type;
	public:
		Ice(void);
		~Ice();
		Ice(const std::string &type);
		Ice& operator=(const Ice& copy_Dog);
};

