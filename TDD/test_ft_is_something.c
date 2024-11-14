/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_is_something.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:04:50 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/14 19:05:18 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <assert.h>
#include <stdio.h>

void	test_ft_isalnum(void)
{
	assert(ft_isalnum('A') == 1);
	assert(ft_isalnum('Z') == 1);
	assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('z') == 1);
	assert(ft_isalnum('1') == 1);
	assert(ft_isalnum('!') == 0);
	assert(ft_isalnum('\n') == 0);
	printf("Tous les tests pour ft_isalnum sont passes \n");
}

void	test_ft_isalpha(void)
{
	assert(ft_isalpha('A') == 1);
	assert(ft_isalpha('Z') == 1);
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('z') == 1);
	assert(ft_isalpha('1') == 0);
	assert(ft_isalpha('!') == 0);
	assert(ft_isalpha('\n') == 0);
	printf("Tous les tests pour ft_isalpha sont passes \n");
}

void	test_ft_isascii(void)
{
	assert(ft_isascii('A') == 1);
	assert(ft_isascii('Z') == 1);
	assert(ft_isascii('a') == 1);
	assert(ft_isascii('z') == 1);
	assert(ft_isascii('1') == 1);
	assert(ft_isascii('!') == 1);
	assert(ft_isascii('\n') == 1);
	assert(ft_isascii(300) == 0);
	printf("Tous les tests pour ft_isascii sont passes \n");
}

void	test_ft_isdigit(void)
{
	assert(ft_isdigit('A') == 0);
	assert(ft_isdigit('Z') == 0);
	assert(ft_isdigit('a') == 0);
	assert(ft_isdigit('z') == 0);
	assert(ft_isdigit('1') == 1);
	assert(ft_isdigit('!') == 0);
	assert(ft_isdigit('\n') == 0);
	printf("Tous les tests pour ft_isdigit sont passes \n");
}

void	test_ft_isprint(void)
{
	assert(ft_isprint('A') == 1);
	assert(ft_isprint('Z') == 1);
	assert(ft_isprint('a') == 1);
	assert(ft_isprint('z') == 1);
	assert(ft_isprint('1') == 1);
	assert(ft_isprint('!') == 1);
	assert(ft_isprint('\n') == 0);
	printf("Tous les tests pour ft_isprint sont passes \n");
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	return (0);
}
