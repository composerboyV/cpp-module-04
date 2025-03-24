/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:33:50 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/24 16:20:31 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

class Cure : public AMateria 
{
	protected :
		std::string type;
	public :
		Cure(/* args */);
		~Cure();

};
