/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:11:46 by frukundo          #+#    #+#             */
/*   Updated: 2023/12/04 04:58:11 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2)
{
 int i;
 i = 0;
 while (s2[i] != '\0')
 { 
  s1[i] = s2[i];
  i++;
 }
 s1[i] = '\0';
 return (s1);
 
}
int main()
{
 char s1[50];
 char *s2 = "hello me";
 printf("%s\n", ft_strcpy(s1,s2));
 printf("%s\n", strcpy(s1,s2));
}