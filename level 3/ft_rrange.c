#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int i = 0;
	int step = 1;
	int *range;

	int n = start - end;
	if(n < 0)
		n = n * -1;
	n++;

	range = (int *) malloc(sizeof(int) * n);
	if (range)
	{
		if(start < end)
				step = -1;
		while (i < n)
		{
			range[i] = end;
			end = end + step;
			i++;
		}
	}
	return (range);
	
}

int main()
{
	
	int *res = ft_rrange(0, 3);
	printf("%d ",res[0]);
	printf("%d ",res[1]);
	printf("%d ",res[2]);
	printf("%d ",res[3]);
		
	
}