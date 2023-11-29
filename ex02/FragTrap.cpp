/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:34:18 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 21:38:15 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " constructed." << std::endl;
}

FragTrap::FragTrap(FragTrap const& other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " deconstructed." << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& rhs)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return (*this);
}

void    FragTrap::attack(const std::string& target)
{
    //check energy and hit points are greater than zero
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " doesn't have enough hit points or energy points to attack." << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
    _energyPoints -= 1;      
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " gives you a high five." << std::endl;
}