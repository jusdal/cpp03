/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:14:21 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 21:39:16 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavtrap1("Scavvy1");
    ScavTrap scavtrap2("Scavvy2");
    ScavTrap scavtrap3 = scavtrap1;
    
    scavtrap1.attack("the target");
    scavtrap2.takeDamage(500);
    scavtrap2.beRepaired(10);
    scavtrap2.guardGate();

    return (0);

}