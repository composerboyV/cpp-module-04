/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:10:54 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/25 17:24:32 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	
	ICharacter* you  = new Character("you");
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Ice());
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	tmp = src2->createMateria("cure");
	you->equip(tmp);
	tmp = src2->createMateria("ice");
	you->equip(tmp);
	tmp = src2->createMateria("ice");
	you->equip(tmp);
	tmp = src2->createMateria("ice");
	you->equip(tmp);
	tmp = src2->createMateria("ice");
	you->equip(tmp);
	you->unequip(2);
	ICharacter* sogogi = new Character("sogogi");
	you->use(1, *sogogi);
	you->use(3, *sogogi);
	you->use(2, *sogogi);

	delete bob;
	delete me;
	delete src;
	delete src2;
	delete sogogi;
	delete you;

	return (0);
}