/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:07:09 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/21 14:02:10 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned char	*ptr;
// 	int				i;

// 	ptr = s;
// 	i = 0;
// 	while (n--)
// 	{
// 		ptr[i++] = 0;
// 	}
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// int	main(void)
// {
// 	int		*arr;
// 	int		*arr2;
// 	size_t	nmemb;
// 	size_t	size;

// 	nmemb = 10;
// 	size = sizeof(int);
// 	arr = (int *)ft_calloc(nmemb, size);
// 	if (arr == NULL)
// 	{
// 		perror("calloc failed");
// 		return (1);
// 	}
// 	arr2 = (int *)calloc(nmemb, size);
// 	if (arr2 == NULL)
// 	{
// 		perror("calloc failed");
// 		return (1);
// 	}
// 	for (size_t i = 0; i < nmemb; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// 	for (size_t i = 0; i < nmemb; i++)
// 	{
// 		printf("%d ", arr2[i]);
// 	}
// 	printf("\n");
// 	free(arr);
// 	free(arr2);
// 	return (0);
// }
