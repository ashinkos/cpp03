/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:49:49 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/07 01:59:47 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ClapTrap::ClapTrap(){
// 	std::cout << "Default constructor called" << std::endl;
// } 

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap " << name  << " is born."<< std::endl;
	this->_name = name;
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;
} 

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
} 

ClapTrap::ClapTrap(const ClapTrap &c){
	
	*this = c;
} 

ClapTrap & ClapTrap::operator =(const ClapTrap &c){
	
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &c)
	{ 
		this->_name			= c._name;
		this->_hitpoints 	= c._hitpoints;
		this->_energypoints	= c._energypoints;
		this->_attackdamage	= c._attackdamage;
	} 
	return *this;
} 

void ClapTrap::attack(const std::string& target){
	
	if (_hitpoints <= 0){
		std::cout << "ClapTrap " << _name << " is allready dead." << std ::endl;
		return;
	}
	if (_energypoints <= 0){
		std::cout << "ClapTrap " << _name << " is out of energy" << std ::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackdamage << " of damages" << std ::endl;
	_energypoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount){
	
	if (_hitpoints <= amount){
		std::cout << "ClapTrap " << _name << " is dead." << std ::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage! "  << std ::endl;
	_hitpoints -= amount;
} 

void	ClapTrap::beRepaired(unsigned int amount){
	
	if (_hitpoints <= 0){
		std::cout << "ClapTrap " << _name << " is allready dead." << std ::endl;
		return;
	}
	if (_energypoints <= 0){
		std::cout << "ClapTrap " << _name << " has no energy points" << std ::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " repairs itself with " << amount << " hit points! " << std ::endl;
	_energypoints -= 1;
	_hitpoints += amount;
} 

