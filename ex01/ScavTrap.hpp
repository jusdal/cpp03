/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:29:45 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 20:13:41 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();

public:
	ScavTrap(std::string name);                //constructor
    ScavTrap(ScavTrap const& other);           //copy constructor
	~ScavTrap();                               //destructor

    ScavTrap& operator=(ScavTrap const& rhs);   //copy assignment operator overload
    
    void    attack(const std::string& target);
	void    guardGate();
};

#endif