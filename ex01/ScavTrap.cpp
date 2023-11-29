/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:59:51 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 16:39:46 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;

    std::cout << "ScavTrap " << _name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " deconstructed." << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
        _energyPoints--;
    }
    else
        std::cout << "ScavTrap " << _name << " doesn't have enough Hit Points or Energy Points." << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in gatekeeper mode." << std::endl;
}