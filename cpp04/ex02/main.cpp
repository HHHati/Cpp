/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:23:48 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/12 16:23:53 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"


int	main(void)
{
	AAnimal	* animal_array[10];
	for (unsigned int i = 0; i < 5; i++)
	{
		animal_array[i] = new Cat();
		animal_array[i + 5] = new Dog();
	}
	
	//To check if we can call the abstract class

	// const AAnimal* animal = new AAnimal();
	// std::cout << "Hi, I am a " << animal->getType() << " and I don't have a Brain!" << std::endl;
	// animal->makeSound();
	// delete animal;
	// std::cout << std::endl;
	
	
	Dog* dog = new Dog();
	std::cout << "Hi, I am a " << dog->getType() << " " << std::endl;
	dog->makeSound();
	std::cout << "I am thinking of: " << dog->getIdea(0) << std::endl;
	std::cout << "I have a new idea! FOOD!\n";
	dog->setIdea(0, "I want to eat something. FOOD");
	std::cout << "I am thinking of: " << dog->getIdea(0) << std::endl;
	Dog * dog_copy = new Dog(*dog);
	delete dog;
	std::cout << "Hi, I am a " << dog_copy->getType() << " " << std::endl;
	std::cout << "I am thinking of: " << dog_copy->getIdea(0) << std::endl;
	std::cout << "I have a new idea! Hunting a Cat!\n";
	dog_copy->setIdea(1, "I want to hunt a Cat. Cat");
	std::cout << "I am thinking of: " << dog_copy->getIdea(1) << std::endl;
	dog_copy->makeSound();
	delete dog_copy;
	std::cout << std::endl;
	
	
	Cat* cat = new Cat();
	std::cout << "Hi, I am a " << cat->getType() << " " << std::endl;
	std::cout << "I am thinking of: " << cat->getIdea(0) << std::endl;
	std::cout << "I have a new idea! FOOD!\n";
	cat->setIdea(0, "I want to eat something. FOOD");
	std::cout << "I am thinking of: " << cat->getIdea(0) << std::endl;
	cat->makeSound();
	Cat * cat_copy = new Cat(*cat);
	delete cat;
	std::cout << "Hi, I am a " << cat_copy->getType() << " " << std::endl;
	std::cout << "I am thinking of: " << cat_copy->getIdea(0) << std::endl;
	std::cout << "I have a new idea! Hunting a Mouse!\n";
	cat_copy->setIdea(1, "I want to hunt a Mouse. Mouse");
	std::cout << "I am thinking of: " << cat_copy->getIdea(1) << std::endl;
	cat_copy->makeSound();
	delete cat_copy;
	std::cout << std::endl;


	WrongAnimal* wrong_animal = new WrongAnimal();
	std::cout << "Hi, I am a " << wrong_animal->getType() << " " << std::endl;
	std::cout << "I don't have a Brain yet. :-(\n";
	wrong_animal->makeSound();
	delete wrong_animal;
	std::cout << std::endl;


	WrongAnimal* wrong_cat = new WrongCat();
	std::cout << "Hi, I am a " << wrong_cat->getType() << " " << std::endl;
	std::cout << "I don't have a Brain yet too. :-((\n";
	wrong_cat->makeSound();
	delete wrong_cat;
	std::cout << std::endl;

	for (unsigned int i = 0; i < 5; i++)
	{
		delete animal_array[i];
		delete animal_array[i + 5];
	}
	system("leaks abstract");
	return (0);
}
