/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:28:27 by jdaly             #+#    #+#             */
/*   Updated: 2023/11/29 21:33:58 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    FragTrap();

public:

	FragTrap(std::string name);                //constructor
    FragTrap(FragTrap const& other);           //copy constructor
	~FragTrap();                               //destructor

    FragTrap& operator=(FragTrap const& rhs);   //copy assignment operator overload
    
    void    attack(const std::string& target);
	void    highFivesGuys(void);
};

#endif