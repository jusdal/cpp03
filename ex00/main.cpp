/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:31:12 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/30 14:55:37 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    claptrap1("Attacker");
    ClapTrap    claptrap2("Victim");
    ClapTrap    claptrap3(claptrap2);
    ClapTrap    claptrap4("Robot");

    claptrap1.attack("Victim");		//loses attackDamage (0) number of hitPoints
    claptrap2.takeDamage(20);		//loses 20 hitPoints (goes to 0)
    claptrap2.beRepaired(10); 		//not able to repair becuase no hitPoints

    claptrap2.attack("Robot");		//not enough hitPoints to attack
    claptrap4.takeDamage(5); 		//loses 5 hitPoints (goes to 5)
    claptrap4.beRepaired(400);		//hitPoints go to max (10)
    claptrap4.takeDamage(1000);		//hitPoints go to 0
    claptrap4.beRepaired(1000); 	//not able to repair itself because no hitPoints
    
    return (0);
}