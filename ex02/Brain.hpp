/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:50:46 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 14:13:29 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define	BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
private:
	std::string	ideas[100];
public:
	Brain(void);
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();
	
	void	setidea(int index, const std::string& idea);
	std::string	getidea(int index) const;
};


#endif
