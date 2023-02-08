/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:27:30 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/08 23:27:31 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Default constructor called" << std::endl;
} 

ScavTrap::~ScavTrap(){
	std::cout << "Destructor called" << std::endl;
} 

ScavTrap::ScavTrap(const ScavTrap &s){
	std::cout << "Copy constructor called" << std::endl;
	 *this = s;
} 

ScavTrap & ScavTrap::operator =(const ScavTrap &s){
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &s)
	{ 
	} 
	return *this;
} 

