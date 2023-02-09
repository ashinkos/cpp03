/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:30:00 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/09 03:37:18 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
int main (){
    
    FragTrap B ("aouni");
    FragTrap C ("foo");
    
    
    B.attack("aouni");
    B.takeDamage(7);
    B.beRepaired(4);
    std::cout << "/*****************/" << std::endl;
    C.attack("alaa");
    C.takeDamage(20);
    C.beRepaired(20);
    C.highFivesGuys();
}
