/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 10:42:07 by mroux             #+#    #+#             */
/*   Updated: 2019/08/02 11:32:01 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int ret;

	i = 0;
	ret = 0;
	while (i < n - 1)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			break ;
		i++;
	}
	while (i < n - 1)
	{
		dest[i] = '\0';
		i++;
	}
	dest[n - 1] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i + 1);
}
