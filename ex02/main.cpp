/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:10:54 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 10:48:35 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "===== 추상 클래스 테스트 =====" << std::endl;
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
    
    std::cout << "\n===== 파생 클래스 활용 =====" << std::endl;
    
    Dog* dog = new Dog();
    Cat* cat = new Cat();
    
    dog->makeSound();
    cat->makeSound();
    
    std::cout << "\n===== 메모리 정리 =====" << std::endl;
    delete j;
    delete i;
    delete dog;
    delete cat;
    
    return 0;
}
