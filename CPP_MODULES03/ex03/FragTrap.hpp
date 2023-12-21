/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:06:39 by aben-nei          #+#    #+#             */
/*   Updated: 2023/12/16 16:27:56 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include"ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void	highFivesGuys(void);
};


#endif