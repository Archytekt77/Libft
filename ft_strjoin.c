/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:05:37 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/21 16:43:25 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_total_length(char **strs, int size)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + (size - 1) * ft_strlen() + 1;
	return (length);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
    char   *str;

    str = ft_strlcat(s1, s2, ft_strlen(s1) + ft_strlen(s2) + 1);

    

}
/*#include <stdio.h>

int	main(void)
{
	char	*strs;
	char	*sep;

	strs = {"Hello", "World", "!"};
	sep = " ";
	printf("%s", ft_strjoin(11, *strs, sep));
	return (0);
}*/