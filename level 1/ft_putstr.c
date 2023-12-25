/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:00:38 by frukundo          #+#    #+#             */
/*   Updated: 2023/12/03 16:11:00 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
 int i;
 i = 0;
 while (str[i])
 {
	write(1, &str[i], 1);
	i++;
 }
 
}
int main()
{
	ft_putstr("hello world of programmers \n");
}