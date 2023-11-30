/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:31:12 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/30 15:57:44 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    claptrap1("Attacker");
    ClapTrap    claptrap2("Victim");
    ClapTrap    claptrap3(claptrap2);
    ClapTrap    claptrap4("Robot");

    claptrap1.attack("target");		//attacker loses 1 energy point
    claptrap2.takeDamage(20);		//victim loses 20 hitPoints (goes to 0)
    claptrap2.beRepaired(10); 		//victim not able to repair becuase no hitPoints

    claptrap2.attack("target");		//not enough hitPoints to attack
    claptrap4.takeDamage(5); 		//loses 5 hitPoints (goes to 5)
    claptrap4.beRepaired(400);		//hitPoints go to max (10)
    claptrap4.takeDamage(1000);		//hitPoints go to 0
    claptrap4.beRepaired(1000); 	//not able to repair itself because no hitPoints
    
    return (0);
}