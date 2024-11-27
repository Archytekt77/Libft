/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaria <lmaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:00:17 by lmaria            #+#    #+#             */
/*   Updated: 2024/11/19 16:18:58 by lmaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;
	int			i;

	i = 0;
	last_occurrence = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_occurrence = &s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return ((char *)last_occurrence);
}
