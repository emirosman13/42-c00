/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muosman < muosman@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:01:33 by muosman           #+#    #+#             */
/*   Updated: 2024/07/09 13:55:29 by muosman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ahmet;

	ahmet = '0';
	while (ahmet <= '9')
	{
		write(1, &ahmet, 1);
		ahmet++;
	}
}
