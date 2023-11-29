/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:14:21 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 16:24:18 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap1("Scavvy1");
    ScavTrap scavTrap2("Scavvy2");

    scavTrap1.attack("the wall");
    scavTrap1.takeDamage(10);
    scavTrap1.beRepaired(10);
    scavTrap1.guardGate();

    return (0);

}