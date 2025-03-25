/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:07:18 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/25 16:42:36 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter 
{
	private :
		std::string type;
		AMateria*	inven[4];
	public:
		Character(std::string name);
		~Character();
		Character(const Character& other);
		Character& operator=(const Character& other);
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
