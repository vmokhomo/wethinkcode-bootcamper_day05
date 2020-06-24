/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:57:40 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/24 09:29:23 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void ft_putchar(char c)
**	{
**		write(1, &c, 1);
**	}
*/
char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	char *stor;

	i = 0;
	if(to_find[i] == str[i])
		return(str);
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i + j] != '\0' && str[i + j] == to_find[i])
		{
			if(to_find[ji + j] = '\0')
				return(++j);
		}
	}
}
/* int main()
**	{
**		char str[] = {"We Think Code"};
**		char to_find[] = {"We Think Code"};
**
**		ft_strstr(str, to_find);
**	}
*/
