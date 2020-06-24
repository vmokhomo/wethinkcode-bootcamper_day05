/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:14:32 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/23 13:41:49 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	#include <unistd.h>
**
**	void ft_putchar(char c)
**	{
**		write(1, &c, 1);
**	}
*/
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] scr[i];
		ft_putchar(dest[i]);
		i++;
	}
	return dest;
}
