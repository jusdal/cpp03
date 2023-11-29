/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:14:21 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 21:41:42 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap scavtrap1("Scavvy1");
    scavtrap1.attack("the target");
    scavtrap1.takeDamage(10);
    scavtrap1.beRepaired(10);
    scavtrap1.guardGate();

    FragTrap fragtrap1("Fraggy1");
    fragtrap1.attack("the target");
    fragtrap1.takeDamage(10);
    fragtrap1.beRepaired(10);
    fragtrap1.highFivesGuys();

    return (0);

}