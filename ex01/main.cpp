/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:44:38 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/09 00:18:19 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main (){
    
    // ClapTrap A ("alaa");
    // ClapTrap B ("aouni");
    ScavTrap C ("foo");
    
    
    
    // A.attack("aouni");
    // A.takeDamage(4);
    // A.beRepaired(4);
    /*****************/
    C.attack("alaa");
    C.takeDamage(20);
    C.beRepaired(20);
    C.guardGate();
}
