/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:59:51 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/20 18:25:49 by lmaria           ###   ########.fr       */
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
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}

// #include "libft.h"
// int main(void)
// {
//     const char str[] = "Hello, World!";
//     char ch = 'W';
//     char *result;

//     result = ft_strchr(str, ch);
//     if (result != NULL)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found\n", ch);

//     // Test with character not in string
//     ch = 'z';
//     result = ft_strchr(str, ch);
//     if (result != NULL)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found\n", ch);

//     // Test with character at the end of the string
//     ch = '!';
//     result = ft_strchr(str, ch);
//     if (result != NULL)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found\n", ch);

//     // Test with null character
//     ch = '\0';
//     result = ft_strchr(str, ch);
//     if (result != NULL)
//         printf("Null character found at position: %ld\n", result - str);
//     else
//         printf("Null character not found\n");

//     return 0;
// }