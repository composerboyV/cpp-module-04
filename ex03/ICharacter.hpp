/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:34:29 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/24 16:19:47 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"

class ICharacter
{
private:
	/* data */
public:
	ICharacter(void);
	virtual ~ICharacter();
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	
};
