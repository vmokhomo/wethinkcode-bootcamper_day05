/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmokhomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:40:19 by vmokhomo          #+#    #+#             */
/*   Updated: 2020/06/23 13:13:48 by vmokhomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
**
**	void ft_putchar(char c)
**	{
**		write(1, &c, 1);
**	}
*/
char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		ft_putchar(dest[i]);
		i++;
	}
	return(dest);
}
/*	int main()
**	{
**		char scr_a[] = {"Learming to program"};
**		char dest_a[sizeof(scr_a)];
**
**		ft_strcpy(dest_a, scr_a);
**	}
*/
