/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:10:54 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/12 12:38:13 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "W_Animal.hpp"

int main()
{
    // const Animal* meta = new Animal(); // 이제 유효하지 않음 (추상 클래스)
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
    // meta->makeSound(); 추상클래스로 출력 x
    
    delete j;
    delete i;
    
    return 0;
}

