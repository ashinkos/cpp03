/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:30:06 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/09 00:38:23 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS
#define FRAGTRAP_CLASS

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &s);
		FragTrap(std::string name);
		FragTrap & operator =(const FragTrap &s);
		void highFivesGuys(void);
	private: 

}; 

#endif
