/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/04 12:21:16 by katherine     #+#    #+#                 */
/*   Updated: 2022/01/04 12:42:10 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string Name) : ClapTrap(Name){
			std::cout << "FragTrap name constructor called." << std::endl;
			HitPoints = 100;
			EnergyPoints = 100;
			AttackDamage = 100;
		};
		~FragTrap(void);
		void highFivesGuys(void);
};

#endif