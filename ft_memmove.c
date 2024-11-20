/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:46:28 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/20 17:40:03 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

// int	main(void)
// {
// 	char dest1[50] = "Destination";
// 	const char src1[50] = "Source";
// 	printf("Before memmove: %s\n", dest1);
// 	ft_memmove(dest1, src1, 6);
// 	printf("After memmove: %s\n", dest1);

// 	// Test with overlapping memory areas
// 	char overlap_test[50] = "Overlap test string";
// 	ft_memmove(overlap_test + 5, overlap_test, 10);
// 	printf("After overlapping memmove: %s\n", overlap_test);

// 	return (0);
// }