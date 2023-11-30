/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:14:21 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/30 15:12:49 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap scavtrap1("Scavvy1");
    scavtrap1.attack("the target");
    scavtrap1.takeDamage(10);		//inherited method
    scavtrap1.beRepaired(10);		//inherited method
    scavtrap1.guardGate();

    FragTrap fragtrap1("Fraggy1");
    fragtrap1.attack("the target");
    fragtrap1.takeDamage(10);		//inherited method
    fragtrap1.beRepaired(10);		//inherited method
    fragtrap1.highFivesGuys();

    return (0);

}