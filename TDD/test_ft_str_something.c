#include "../libft.h"
#include <assert.h>
#include <stdio.h>

void	test_ft_strlen(void)
{
	assert(ft_strlen("") == 0);
	assert(ft_strlen("Hello") == 5);
	assert(ft_strlen("Hello World") == 11);
	assert(ft_strlen("!@#$%^&*()_+") == 12);
	assert(ft_strlen("1234567890") == 10);
	assert(ft_strlen("\a\b\t\n\v\f\r") == 7);
	assert(ft_strlen("\x01\x7f\x06") == 3);
	assert(ft_strlen("Hello\x07World") == 11);
	printf("Tous les tests pour ft_strlen sont passes \n");
}

// void	test_ft_strlcpy(void)
// {
// 	assert(ft_strlcpy("", "", 5) == 0);
// 	assert(ft_strlcpy("", "Hello", 5) == 5);
// 	assert(ft_strlcpy("", "Hello World", 5) == 11);
// 	assert(ft_strlcpy("", "!@#$%^&*()_+", 5) == 12);
// 	assert(ft_strlcpy("", "1234567890", 5) == 10);
// 	assert(ft_strlcpy("", "\a\b\t\n\v\f\r", 5) == 7);
// 	assert(ft_strlcpy("", "\x01\x7f\x06", 5) == 3);
// 	assert(ft_strlcpy("", "Hello\x07World", 5) == 11);
// 	printf("Tous les tests pour ft_strlcpy sont passes \n");
// }

int	main(void)
{
	test_ft_strlen();
	return (0);
}