/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:04:42 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/06/28 23:08:43 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class	Harl
{
	public:
		
		void	complainParser(std::string level);
		void	complainExecutor(int max_level);

	private:

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};


#endif