/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:00:14 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/15 18:31:43 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

// char	*strnstr(const char *big, const char *little, size_t len)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	if (little[0] == '\0')
// 		return (big);
// 	while (big[i])
// 	{
// 		j = 0;
// 		while (big[i + j] && little[j] && big[i + j] == little[j])
// 		{
// 			j++;
// 			if (little[j] == '\0')
// 				return (&big[i]);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

#include <stdio.h>
#include <string.h>

int main(void)
{
    // Définir des chaînes de test
    // const char *big = "Hello, World!";
    // const char *little = "World";
    // const char *empty = "";

	// Test 1: Recherche de "World" dans "Hello, World!" (devrait retourner "World!")
    printf("Test 1: %s\n", strn("Hello, World!", "World", 13));
	strlen
	// Test 2: Recherche de "World" dans "Hello, World!" (devrait retourner NULL, limite atteinte)
    printf("Test 2: %s\n", strnstr("Hello, World!", "World", 5));
	// Test 3: Recherche de "" dans "Hello, World!" (devrait retourner "Hello, World!")
    printf("Test 3: %s\n", strnstr("Hello, World!", "World", 13));
	// Test 4: Recherche de "XYZ" dans "Hello, World!" (devrait retourner NULL, non trouvé)
    printf("Test 4: %s\n", strnstr("Hello, World!", "XYZ", 13));
	// Test 5: Recherche de "Hello" dans "Hello, World!" (devrait retourner "Hello, World!")
    printf("Test 5: %s\n", strnstr("Hello, World!", "Hello", 5));
	// Test 6: Recherche de "" dans "" (devrait retourner NULL)
    printf("Test 6: %s\n", strnstr("", "World", 0));
	// Test 7: Recherche de "Hello, World!!!" dans "Hello, World!" (devrait retourner NULL)
    printf("Test 7: %s\n", strnstr("Hello, World!", "Hello, World!!!", 13));

    return 0;
}

