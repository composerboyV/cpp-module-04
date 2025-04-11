/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:33:50 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/11 21:06:29 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

class Cure : public AMateria 
{
	public :
		Cure(void);
		~Cure();
		Cure(const std::string &type);
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
