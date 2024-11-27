/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:50:13 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/20 17:59:48 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	const char	str1[] = "Hello, World!";
// 	const char	str2[] = "Hello, World!";
// 	const char	str3[] = "Hello, 42!";
// 	int			result;

// 	result = ft_memcmp(str1, str2, 13);
// 	printf("Comparison result (str1 vs str2): %d\n", result);
// 	result = ft_memcmp(str1, str3, 13);
// 	printf("Comparison result (str1 vs str3): %d\n", result);
// 	return (0);
// }
