/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:02:04 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/11 21:06:10 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    // 1. 기본 테스트: MateriaSource, Character, equip, use
    std::cout << "===== 기본 기능 테스트 =====" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* player = new Character("플레이어");
    ICharacter* target = new Character("대상");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    player->equip(tmp);
    
    tmp = src->createMateria("cure");
    player->equip(tmp);
    
    player->use(0, *target);  // Ice 사용
    player->use(1, *target);  // Cure 사용
    
    // 2. unequip 테스트
    std::cout << "\n===== unequip 테스트 =====" << std::endl;
    player->unequip(0);  // Ice 제거
    player->use(0, *target);  // 아무것도 없음
    player->use(1, *target);  // Cure는 여전히 있음
    
    // 3. 복사 테스트
    std::cout << "\n===== 복사 테스트 =====" << std::endl;
    Character* originalChar = new Character("원본");
    originalChar->equip(src->createMateria("ice"));
    originalChar->equip(src->createMateria("cure"));
    
    Character* copiedChar = new Character(*originalChar);  // 복사 생성자
    
    std::cout << "원본 캐릭터:" << std::endl;
    originalChar->use(0, *target);
    originalChar->use(1, *target);
    
    std::cout << "복사된 캐릭터:" << std::endl;
    copiedChar->use(0, *target);
    copiedChar->use(1, *target);
    
    // 4. 복사 후 변경 테스트
    std::cout << "\n===== 복사 후 변경 테스트 =====" << std::endl;
    originalChar->unequip(0);
    copiedChar->equip(src->createMateria("ice"));
    
    std::cout << "원본 캐릭터 (Ice 제거 후):" << std::endl;
    originalChar->use(0, *target);
    originalChar->use(1, *target);
    
    std::cout << "복사된 캐릭터 (Ice 추가 후):" << std::endl;
    copiedChar->use(0, *target);
    copiedChar->use(1, *target);
    copiedChar->use(2, *target);
    
    // 메모리 정리
    delete copiedChar;
    delete originalChar;
    delete target;
    delete player;
    delete src;
    
    return 0;
}
