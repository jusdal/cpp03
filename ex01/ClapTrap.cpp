/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:31:34 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 16:06:46 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    //check energy and hit points are greater than zero
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
        _energyPoints--;
    }
    else
        std::cout << "ClapTrap " << _name << " doesn't have enough Hit Points or Energy Points." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " has taken " << amount << " Hit Points of damage." <<std::endl;
    _hitPoints -= amount;
    if (_hitPoints <= 0)
        std::cout << "ClapTrap " << _name << " has died." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " repairs itself, adding " << amount << " Hit Points." << std::endl;
        _hitPoints += amount;
        _energyPoints--;
    }

}