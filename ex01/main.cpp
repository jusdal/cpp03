/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:14:21 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/30 15:10:32 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavtrap1("Scavvy1");
    ScavTrap scavtrap2("Scavvy2");
    ScavTrap scavtrap3 = scavtrap1;
    
    scavtrap1.attack("the target"); //atacks and causes 20 points of damage
    scavtrap2.takeDamage(500);		//inherited method
    scavtrap2.beRepaired(10);		//inherited method
    scavtrap2.guardGate();			//own method

    return (0);

}