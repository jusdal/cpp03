/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:59:51 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 20:33:23 by jdaly            ###   ########.fr       */
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

ScavTrap::ScavTrap(ScavTrap const& other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " deconstructed." << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    //check energy and hit points are greater than zero
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " doesn't have enough hit points or energy points to attack." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
    _energyPoints -= 1;      
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in gatekeeper mode." << std::endl;
}