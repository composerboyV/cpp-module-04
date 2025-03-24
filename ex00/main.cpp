/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:10:54 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/24 09:23:25 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "W_Animal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //고양이 소리가 출력됩니다!
    j->makeSound();
    meta->makeSound();
    delete  meta;
    delete  j;
    delete  i;

    return 0;
}



// int main()
// {
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const Animal	*meta = new Animal();
// 	std::cout << std::endl;
// 	std::cout << "\033[34mTesting\033[0m" << std::endl;

// 	std::cout << "Animal _type: " << meta->getType() << std::endl;
// 	meta->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete meta;
// 	std::cout << std::endl;

// 	std::cout << "-------------------------------------------------------" << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const Animal	*catto = new Cat();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	std::cout << "Cat _type: " << catto->getType() << std::endl;
// 	catto->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete catto;
// 	std::cout << std::endl;

// 	std::cout << "-------------------------------------------------------" << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const Animal	*doggo = new Dog();
// 	std::cout << std::endl;
// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	std::cout << "Dog _type: " << doggo->getType() <<std::endl;
// 	doggo->makeSound();
// 	std::cout << std::endl;
// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete doggo;
// 	std::cout << std::endl;

// 	std::cout << "-------------------------------------------------------" << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const W_Animal	*wrong_meta = new W_Animal();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	std::cout << "Animal _type: " << wrong_meta->getType() << std::endl;
// 	wrong_meta->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete wrong_meta;
// 	std::cout << std::endl;

// 	std::cout << "-------------------------------------------------------" << std::endl;

// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const W_Animal	*wrong_catto = new WrongCat();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	std::cout << "WrongCat _type: " << wrong_catto->getType() <<std::endl;
// 	wrong_catto->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete wrong_catto;
// 	std::cout << std::endl;

// 	std::cout << "-------------------------------------------------------" << std::endl;

// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 	const WrongCat	*wrong_catta = new WrongCat();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
// 	std::cout << "WrongCat _type: " << wrong_catta->getType() <<std::endl;
// 	wrong_catta->makeSound();
// 	std::cout << std::endl;

// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
// 	delete wrong_catta;
// 	std::cout << std::endl;

// 	return (0);
// }