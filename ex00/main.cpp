/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:31:12 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 20:09:03 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    claptrap1("Attacker");
    ClapTrap    claptrap2("Victim");
    ClapTrap    claptrap3(claptrap2);
    ClapTrap    claptrap4("Robot");

    claptrap1.attack("Victim");
    claptrap2.takeDamage(20);
    claptrap2.beRepaired(10);

    claptrap2.attack("Robot");
    claptrap4.takeDamage(5);
    claptrap4.beRepaired(400);
    claptrap4.takeDamage(1000);
    claptrap4.beRepaired(1000);
    
    return (0);
}