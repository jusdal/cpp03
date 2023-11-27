/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:31:26 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/27 21:26:45 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string     _name;
    int             _hitPoints;
    int             _energyPoints;
    int             _attackDamage;

public:
	ClapTrap(std::string name);                //constructor
    ClapTrap(ClapTrap const& other);           //copy constructor
	~ClapTrap();                               //destructor

    ClapTrap& operator=(ClapTrap const& rhs);   //copy assignment operator overload

	void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif