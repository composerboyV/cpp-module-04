/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:10:54 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/11 21:16:23 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
// #include "Cat.hpp"
// #include "Dog.hpp"
// #include "WrongAnimal.hpp"

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound();
// j->makeSound();
// meta->makeSound();

// delete  meta;
// delete  j;
// delete  i;

// return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:45:32 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/11 13:45:32 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:15:32 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/11 14:15:32 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    // 1. 기본 테스트 - Animal과 소리
    std::cout << "===== 기본 테스트 =====" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    dog->makeSound();
    cat->makeSound();
    
    delete dog;
    delete cat;
    
    // 2. Deep Copy 테스트
    std::cout << "\n===== Deep Copy 테스트 =====" << std::endl;
    Dog* originalDog = new Dog();
    originalDog->Brain_idea(0, "원래 개의 생각");
    
    Dog* copiedDog = new Dog(*originalDog);
    originalDog->Brain_idea(0, "변경된 생각");
    
    std::cout << "원본 Dog의 생각: " << originalDog->getBrain(0) << std::endl;
    std::cout << "복사 Dog의 생각: " << copiedDog->getBrain(0) << std::endl;
    
    delete originalDog;
    delete copiedDog;
    
    // 3. Animal 배열 테스트
    std::cout << "\n===== Animal 배열 테스트 =====" << std::endl;
    const int count = 4;
    Animal* animals[count];
    
    // 배열 절반은 Dog, 절반은 Cat으로 채우기
    for (int i = 0; i < count; i++) {
        if (i < count/2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    
    // 모든 Animal 삭제
    for (int i = 0; i < count; i++)
        delete animals[i];
    
    return 0;
}