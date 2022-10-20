/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:25:49 by mdora             #+#    #+#             */
/*   Updated: 2022/10/16 00:27:08 by mdora            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *string)
{
	int	n;

	n = 0;
	while (string[n] != '\0')
	{
		write (1, &string[n], 1);
		n++;
	}	
}

int	main()
{
	char *str = "42Kocaeli";
	ft_putstr(str);
}
