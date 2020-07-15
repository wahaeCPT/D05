/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:51:45 by wkoela            #+#    #+#             */
/*   Updated: 2020/07/15 14:57:50 by wkoela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
char	*ft_strcpy(char *dest, char *src)
{
	size_t	i;
	i = 0;
		while(src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = ‘\0’;
		return dest;
}
int	main()
{
	char str1[] = “hello”;
	char dest[6];
	*dest = *ft_strcpy(dest, str1);
	int i;
	i = 0;
	while (dest[i])
	{
		ft_putchar(dest[i]);
		i++;
	}
	return 0;
}
