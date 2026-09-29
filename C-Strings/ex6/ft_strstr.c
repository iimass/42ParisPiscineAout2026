/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: samhammo <samhammo@learner.42.tech>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/08/18 10:55:14 by samhammo	       #+#    #+#	      */
/*   Updated: 2026/08/22 15:15:00 by samhammo         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "Bonjour";
	printf("%s",ft_strstr(str,"nj"));
}*/
