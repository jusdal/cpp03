/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:31:34 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 21:24:10 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called." << std::endl;
}

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
    *this = other;
    // _name = other._name;
    // _hitPoints = other._hitPoints;
    // _energyPoints = other._energyPoints;
    // _attackDamage = other._attackDamage;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
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
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " doesn't have enough hit points or energy points to attack." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
    _energyPoints -= 1;        
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if ((unsigned int)_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " has no hit points remaining." << std::endl;
        _hitPoints = 0;
        return ;
    }
    std::cout << "ClapTrap " << _name << " has taken " << amount << " hit points of damage." <<std::endl;
    _hitPoints -= amount;
        
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy or hit points to repair itself." << std::endl;
        return ;
    }
    if (_hitPoints + amount > 10)
    {
        std::cout << "ClapTrap " << _name << " has the maximum number of hit points." << std::endl;
        _hitPoints = 10;
        return ;
    }
    std::cout << "ClapTrap " << _name << " repairs itself, adding " << amount << " hit points." << std::endl;
    _hitPoints += amount;
    _energyPoints -= 1;
}