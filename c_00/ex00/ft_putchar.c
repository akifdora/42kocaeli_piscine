/* ************************************************************************** */
/*                                                                            */
/*                                                         Created by         */
/*   ft_putchar.c                                             mdora           */
/*                                                       _________________    */
/*   By: mdora <mdora@student.42kocaeli.com.tr>         /  ____   ____   /    */
/*                                                     /  /   /  /   /  /     */
/*   Created: 2022/10/12 23:15:46 by mdora            /  /   /  /   /  /      */
/*   Updated: 2022/10/13 01:26:29 by mdora           /__/   /__/   /__/       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) // Fonksiyonumuzda bir char parametresi istiyoruz
{
	write(1, &c, 1); // Fonksiyonun istediği char parametresini yazdırır
}
