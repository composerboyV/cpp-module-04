/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:08:32 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/25 17:00:51 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:
		Ice(void);
		~Ice();
		Ice(const std::string &type);
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

