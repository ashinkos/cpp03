/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:44:38 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/07 01:52:22 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main (){
    
    ClapTrap A ("alaa");
    ClapTrap B ("aouni");
    
    A.attack("aouni");
    A.takeDamage(4);
    A.beRepaired(4);
    /*****************/
    B.attack("alaa");
    B.takeDamage(20);
    B.beRepaired(20);
    
}
