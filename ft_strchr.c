/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:59:51 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/22 13:12:42 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	return (0);
}

// #include "libft.h"

// int	main(void)
// {
// 	const char str[] = "Hello, World!";
// 	char ch = 'W';
// 	char *result;

// 	result = ft_strchr(str, ch);
// 	if (result != NULL)
// 		printf("Character '%c' found at position: %ld\n", ch, result - str);
// 	else
// 		printf("Character '%c' not found\n", ch);

// 	// Test with character not in string
// 	ch = 'z';
// 	result = ft_strchr(str, ch);
// 	if (result != NULL)
// 		printf("Character '%c' found at position: %ld\n", ch, result - str);
// 	else
// 		printf("Character '%c' not found\n", ch);

// 	// Test with character at the end of the string
// 	ch = '!';
// 	result = ft_strchr(str, ch);
// 	if (result != NULL)
// 		printf("Character '%c' found at position: %ld\n", ch, result - str);
// 	else
// 		printf("Character '%c' not found\n", ch);

// 	// Test with null character
// 	ch = '\0';
// 	result = ft_strchr(str, ch);
// 	if (result != NULL)
// 		printf("Null character found at position: %ld\n", result - str);
// 	else
// 		printf("Null character not found\n");

// 	// Test francinette
// 	ch = '\0';
// 	result = ft_strchr("teste", ch);
// 	char *result2 = strchr("teste", ch);
// 	printf("Character '%c' found at position: %ld, for my function\n", ch,
// 		result - "teste");
// 	printf("Character '%c' found at position: %ld, for the real function\n", ch,
// 		result2 - "teste");

// 	// Test t + 256
// 	int ch2 = 't' + 256;
// 	result = ft_strchr("tripouille", ch2);
// 	char *result3 = strchr("tripouille", ch2);
// 	printf("Character '%c' found at position: %ld, for my function\n", ch2,
// 		result - "teste");
// 	printf("Character '%c' found at position: %ld, for the real function\n",
// 		ch2, result3 - "teste");

// 	return (0);
// }