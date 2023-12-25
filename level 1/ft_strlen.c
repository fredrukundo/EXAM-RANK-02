/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:36:41 by frukundo          #+#    #+#             */
/*   Updated: 2023/12/03 15:42:08 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
int main()
{
	printf("len:%d \n", ft_strlen("hello world"));
}