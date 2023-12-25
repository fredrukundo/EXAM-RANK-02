#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len;

	len = abs((start - end)) + 1;
	int *res = (int *)malloc(sizeof(int) * len);
	if(!res)
		return (NULL);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
		
	}
	return (res);
}
#include <stdio.h>

int main()
{
	int *tab = ft_range(1, 4);

		printf("%d ",tab[0]);
		printf("%d ",tab[1]);
		printf("%d ",tab[2]);
		printf("%d ",tab[3]);
}