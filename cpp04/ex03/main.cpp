/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:36:55 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 20:55:29 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "\n====== subject tests =======\n" << std::endl;
	
	MateriaSource* src = new MateriaSource();
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
	delete bob;
	delete me;
	delete src;

	std::cout << "\n====== Personal tests ======\n" << std::endl;

	std::cout << "Create Materia source" << std::endl;
	MateriaSource* book = new MateriaSource();
	book->learnMateria(new Ice());
	book->learnMateria(new Cure());
	std::cout << "Create Adventurer Character" << std::endl;
	ICharacter* Adventurer = new Character("Adventurer");
	std::cout << "Create materia and equip it" << std::endl;
	AMateria* temp;
	temp = book->createMateria("ice");
	Adventurer->equip(temp);
	temp = book->createMateria("cure");
	Adventurer->equip(temp);
	std::cout << "Create Knight Character" << std::endl;
	ICharacter* Knight = new Character("Knight");
	std::cout << "Use inv 0 to Knight" << std::endl;
	Adventurer->use(0, *Knight);
	std::cout << "Use inv 1 to Knight" << std::endl;
	Adventurer->use(1, *Knight);
	std::cout << "Use inv 2 to Knight (empty)" << std::endl;
	Adventurer->use(2, *Knight);
	std::cout << "Unequip inv 1" << std::endl;
	Adventurer->unequip(1);
	std::cout << "Use inv 0 to Knight" << std::endl;
	Adventurer->use(0, *Knight);
	std::cout << "Use inv 1 to Knight" << std::endl;
	Adventurer->use(1, *Knight);
	std::cout << "Equip more than 4 materia" << std::endl;
	temp = book->createMateria("cure");
	Adventurer->equip(temp);
	temp = book->createMateria("cure");
	Adventurer->equip(temp);
	temp = book->createMateria("cure");
	Adventurer->equip(temp);
	temp = book->createMateria("cure");
	Adventurer->equip(temp);
	temp = book->createMateria("cure");
	Adventurer->equip(temp);
	std::cout << "Use inv 0 to Knight" << std::endl;
	Adventurer->use(0, *Knight);
	std::cout << "Use inv 1 to Knight" << std::endl;
	Adventurer->use(1, *Knight);
	std::cout << "Use inv 2 to Knight" << std::endl;
	Adventurer->use(2, *Knight);
	std::cout << "Use inv 3 to Knight" << std::endl;
	Adventurer->use(3, *Knight);
	std::cout << "Trying tu use inv 4 to Knight" << std::endl;
	Adventurer->use(4, *Knight);
	std::cout << "Unequip inv 2" << std::endl;
	Adventurer->unequip(2);
	std::cout << "Use inv 2 to Knight" << std::endl;
	Adventurer->use(2, *Knight);
	std::cout << "Destroy Characters and materia source" << std::endl;
	delete Knight;
	delete Adventurer;
	delete book;
	return 0;
}