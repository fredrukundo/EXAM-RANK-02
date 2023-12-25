#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr)
{
	if(nbr == -2147483648)
		return ("-2147483648\0");
	int n = nbr;
	int len = 0;
	// count the digits
	if (nbr <= 0)
		len++;
	while(n)
	{
		n /= 10;
		len++;
	}
	// memory allocation
	char *res = (char *) malloc(sizeof(char) * (len + 1));

	if(res == NULL)
		return (NULL);
	// add a null-termination
	res[len] = '\0';

	// case of n = 0
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}

	// case of negative number
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	// convert each number to its corresponding char
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		n /= 10;
	}
	return (res);
	
	
}