/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:27:35 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/09 00:20:31 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS
#define SCAVTRAP_CLASS

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &s);
	ScavTrap & operator =(const ScavTrap &s);
	void	guardGate();
private: 

}; 

#endif
