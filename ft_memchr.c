/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:48:25 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/28 21:26:13 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     const char str[] = "Hello, World!";
//     char ch = 'W';
//     char *result;

//     result = ft_memchr(str, ch, sizeof(str));
//     if (result != NULL)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found\n", ch);

//     // Test with character not in string
//     ch = 'z';
//     result = ft_memchr(str, ch, sizeof(str));
//     if (result != NULL)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found\n", ch);

//     // Test with character at the end of the string
//     ch = '!';
//     result = ft_memchr(str, ch, sizeof(str));
//     if (result != NULL)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found\n", ch);

//     return (0);
// }
