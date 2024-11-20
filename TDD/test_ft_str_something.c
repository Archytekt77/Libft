/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_something.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:05:02 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/19 17:06:42 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>
#include <stdio.h>

void	test_ft_strchr(void)
{
	const char	*s = "Hello";

	// Test: character present at the beginning
	assert(ft_strchr(s, 'H') == &"Hello"[0]);
	// Test: character present in the middle
	assert(ft_strchr(s, 'e') == &"Hello"[1]);
	// Test: character present at the end
	assert(ft_strchr(s, 'o') == &"Hello"[4]);
	// Test: character present twice
	assert(ft_strchr(s, 'l') == &"Hello"[2]);
	// Test: '\0' character (end of the string)
	assert(ft_strchr(s, '\0') == &"Hello"[5]);
	// Test: character not present
	assert(ft_strchr(s, 'z') == NULL);
	// Test: empty string
	assert(ft_strchr("", 'H') == NULL);
	printf("All tests for ft_strchr passed!\n");
}

void	test_ft_strlen(void)
{
	// Test: an empty string
	assert(ft_strlen("") == 0);
	// Test: a regular string
	assert(ft_strlen("Hello") == 5);
	// Test: a string with spaces
	assert(ft_strlen("Hello World") == 11);
	// Test: a string with special characters
	assert(ft_strlen("!@#$%^&*()") == 10);
	// Test: a string of numeric characters
	assert(ft_strlen("1234567890") == 10);
	// Test: a string with control characters
	assert(ft_strlen("\n\t\v\f\r") == 5);
	// Test: a string with non-printable ASCII characters
	assert(ft_strlen("\x01\x02\x03\x04") == 4);
	assert(ft_strlen("Hello\x07World") == 11);
	printf("All tests for ft_strlen passed\n");
}

void	test_ft_strlcpy(void)
{
	char	dest[20];
	size_t	len;

	// Test de base : chaîne normale et buffer suffisant
	len = ft_strlcpy(dest, "Hello, World!", sizeof(dest));
	assert(strcmp(dest, "Hello, World!") == 0);
	// La chaîne devrait être copiée entièrement
	assert(len == 13); // Longueur de "Hello, World!" est 13
	// Test avec un buffer plus petit que la chaîne source
	len = ft_strlcpy(dest, "Hello, World!", 6);
	// Taille 6 pour dest (5 caractères + '\0')
	assert(strcmp(dest, "Hello") == 0);
	// La chaîne devrait être tronquée à "Hello"
	assert(len == 13);
	// La fonction doit retourner la longueur totale de la source
	// Test avec un buffer de taille zéro
	len = ft_strlcpy(dest, "Hello", 0);
	assert(len == 5);
	// La fonction doit retourner la longueur totale de la source
	// Aucune copie ne devrait être faite dans dest,
	// donc pas besoin de tester dest ici
	// Test avec une chaîne vide
	len = ft_strlcpy(dest, "", sizeof(dest));
	assert(strcmp(dest, "") == 0); // La chaîne de destination doit être vide
	assert(len == 0);              // Longueur de la chaîne source est 0
	// Test avec des caractères non imprimables
	len = ft_strlcpy(dest, "Hello\x7FWorld", sizeof(dest));
	// Utilisation du caractère DEL (ASCII 127)
	assert(strcmp(dest, "Hello\x7FWorld") == 0);
	// La chaîne doit être copiée avec le caractère non imprimable
	assert(len == 11);
	// Longueur de "Hello\x7FWorld" est 11
	printf("All tests for ft_strlcpy passed\n");
}

void	test_ft_strncmp(void)
{
	// Test: identical strings
	assert(ft_strncmp("Hello", "Hello", 5) == 0);
	assert(ft_strncmp("Hello", "Hello", 0) == 0);
	// Test: different strings
	assert(ft_strncmp("Hello", "World", 5) == -15);
	assert(ft_strncmp("Hello", "Hella", 5) == 14);
	// Test: prefix strings
	assert(ft_strncmp("Hello", "Hell", 4) == 0);
	assert(ft_strncmp("Hello", "Hell", 5) == 111);
	// Test: different lengths
	assert(ft_strncmp("Hello", "HelloWorld", 5) == 0);
	assert(ft_strncmp("Hello", "HelloWorld", 10) == -87);
	// Test: special characters
	assert(ft_strncmp("Hello!", "Hello!", 6) == 0);
	assert(ft_strncmp("Hello!", "Hello?", 6) == -30);
	// Test: length of 0
	assert(ft_strncmp("Hello", "World", 0) == 0);
	// Test: non-printable characters
	assert(ft_strncmp("Hello\x01", "Hello\x01", 6) == 0);
	assert(ft_strncmp("Hello\x01", "Hello\x02", 6) == -1);
	printf("All tests for ft_strncmp passed!\n");
}

void	test_ft_strnstr(void)
{
	const char	*big = "Hello, World!";
	const char	*little = "World";
	const char	*empty = "";

	// Test: normal case
	assert(ft_strnstr(big, little, 13) == big + 7);
	// Test: limit reached
	assert(ft_strnstr(big, little, 5) == NULL);
	// Test: searching for an empty string
	assert(ft_strnstr(big, empty, 13) == big);
	// Test: substring not found
	assert(ft_strnstr(big, "XYZ", 13) == NULL);
	// Test: searching for "Hello" in "Hello, World!"
	assert(ft_strnstr(big, "Hello", 5) == big);
	// Test: searching for a non-empty string in an empty string
	assert(ft_strnstr(empty, little, 0) == NULL);
	// Test: searching for "Hello, World!!!" in "Hello, World!"
	assert(ft_strnstr(big, "Hello, World!!!", 13) == NULL);
	printf("All tests for ft_strnstr passed!\n");
}

void	test_ft_strrchr(void)
{
	const char	*s = "Hello";

	// Test: character present at the end
	assert(ft_strrchr(s, 'o') == &"Hello"[4]);
	// Test: character present in the middle
	assert(ft_strrchr(s, 'e') == &"Hello"[1]);
	// Test: character present at the begining
	assert(ft_strrchr(s, 'H') == &"Hello"[0]);
	// Test: character present twice
	assert(ft_strrchr(s, 'l') == &"Hello"[3]);
	// Test: '\0' character (end of the string)
	assert(ft_strrchr(s, '\0') == &"Hello"[5]);
	// Test: character not present
	assert(ft_strrchr(s, 'z') == NULL);
	// Test: empty string
	assert(ft_strrchr("", 'H') == NULL);
	printf("All tests for ft_strrchr passed!\n");
}

int	main(void)
{
	test_ft_strchr();
	// test_ft_strlcat();
	test_ft_strlcpy();
	test_ft_strlen();
	test_ft_strncmp();
	test_ft_strnstr();
	test_ft_strrchr();
	return (0);
}
