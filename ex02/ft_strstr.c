/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:28:27 by wkoela            #+#    #+#             */
/*   Updated: 2020/07/15 15:40:56 by wkoela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ret;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] == str[i + j] && to_find[j] != '\0')
			{
				j++;
			}
			if (to_find[j] == '\0')
			{
				ret = &str[i];
				return (ret);
			}
			else
				j = 0;
		}
		i++;
	}
	return (0);
}
