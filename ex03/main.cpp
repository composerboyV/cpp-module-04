/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:10:54 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/07 19:42:06 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    // 1. 기본 기능 테스트
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    
    // 2. 캐릭터 생성 및 장비 테스트
    ICharacter* character = new Character("Character");
    AMateria* m1 = src->createMateria("ice");
    character->equip(m1);
    AMateria* m2 = src->createMateria("cure");
    character->equip(m2);

    // 3. 사용 테스트
    ICharacter* target = new Character("Target");
    std::cout << "===== Using slot 0 and 1 =====" << std::endl;
    character->use(0, *target);
    character->use(1, *target);
    
    // 4. unequip 테스트
    std::cout << "\n===== Unequipping slot 0 =====" << std::endl;
    character->unequip(0);
    
    // 5. unequip 후 use 테스트
    std::cout << "\n===== Using slots after unequip =====" << std::endl;
    character->use(0, *target); // 비어있어야 함
    character->use(1, *target); // 여전히 작동해야 함
    
    // 6. 슬롯 채우기 테스트
    std::cout << "\n===== Filling empty slot =====" << std::endl;
    AMateria* m3 = src->createMateria("ice");
    character->equip(m3);
    character->use(2, *target); // 새로 장착한 아이스 마테리아 사용
    
    delete target;
    delete character;
    delete src;
    
    return 0;
}
