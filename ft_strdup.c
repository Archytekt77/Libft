/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:59:02 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/20 20:01:21 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int		i;
	char	*dup;
	int		length;

	i = 0;
	length = ft_strlen(s);
	dup = (char *)malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (i < length)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int	main(void)
// {
// 	char	str[] = "azerty";

// 	printf("La str est : %s\n", strdup(str));
// 	printf("La str est : %s\n", ft_strdup(str));
// 	return (0);
// }