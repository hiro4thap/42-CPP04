/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:13:21 by hiono             #+#    #+#             */
/*   Updated: 2024/06/26 18:50:21 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout << "--- Single instance ---" << "\n";
	std::cout << "--- Construct---" << "\n";
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	std::cout << "--- Destruct ---" << "\n";
	delete d; //should not create a leak
	delete c;
	
	std::cout << "\n";
	std::cout << "--- Array of instances ---" << "\n";
	std::cout << "--- Construct---" << "\n";
	int size = 10;
	Animal *animal_array[size];
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	std::cout << "--- Destruct ---" << "\n";
	for (int i = 0; i < size; i++)
	{
		delete animal_array[i];
	}

	//std::cout << "\n";
	//std::cout << "--- Shallow Copy Test Dog (*causing double delete _brain attribute in destruction) ---" << "\n";
	//Dog dog;
	//Brain	brain;
	//brain.setIdea(0, "Original dog's brain");
	//dog.setBrain(&brain);
	//Dog co_dog = dog;
	//Dog cc_dog(dog);
	//std::cout << "original dog's brain             :" << dog.getBrain()->getIdea(0) << "\n";	
	//std::cout << "copied by operator dog's brain   :" << co_dog.getBrain()->getIdea(0) << "\n";	
	//std::cout << "copied by constuctor dog's brain :" << cc_dog.getBrain()->getIdea(0) << "\n";	
	//brain.setIdea(0, "NO DOG BRAIN!!");
	//dog.setBrain(&brain);
	//std::cout << "original dog's brain             :" << dog.getBrain()->getIdea(0) << "\n";	
	//std::cout << "copied by operator dog's brain   :" << co_dog.getBrain()->getIdea(0) << "\n";	
	//std::cout << "copied by constuctor dog's brain :" << cc_dog.getBrain()->getIdea(0) << "\n";	

	//std::cout << "\n";
	//std::cout << "--- Shallow Copy Test Cat (*causing double delete _brain attribute in destruction) ---" << "\n";
	//Cat cat;
	//Brain	brain;
	//brain.setIdea(0, "Original cat's brain");
	//cat.setBrain(&brain);
	//Cat co_cat = cat;
	//Cat cc_cat(cat);
	//std::cout << "original cat's brain             :" << cat.getBrain()->getIdea(0) << "\n";	
	//std::cout << "copied by operator cat's brain   :" << co_cat.getBrain()->getIdea(0) << "\n";	
	//std::cout << "copied by constuctor cat's brain :" << cc_cat.getBrain()->getIdea(0) << "\n";	
	//brain.setIdea(0, "NO CAT BRAIN!!");
	//cat.setBrain(&brain);
	//std::cout << "original cat's brain             :" << cat.getBrain()->getIdea(0) << "\n";	
	//std::cout << "copied by operator cat's brain   :" << co_cat.getBrain()->getIdea(0) << "\n";	
	//std::cout << "copied by constuctor cat's brain :" << cc_cat.getBrain()->getIdea(0) << "\n";	

	return 0;

}
