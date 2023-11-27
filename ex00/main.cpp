/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:31:12 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/27 21:16:06 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    ClapTrap1("Attacker");
    ClapTrap    ClapTrap2("Victim");

    ClapTrap1.attack("Victim");
    ClapTrap2.takeDamage(2);
    ClapTrap2.beRepaired(2);
    ClapTrap2.attack("ClapTrap1");
    ClapTrap1.takeDamage(2);
    ClapTrap2.attack("ClapTrap1");
    ClapTrap1.takeDamage(2);
    ClapTrap2.attack("ClapTrap1");
    ClapTrap1.takeDamage(10);
}