#include <stdio.h>

void	ft_swap(int *a, int *b)
{
 int tmp;
if (a == NULL || b == NULL)
	return ;

 tmp = *a;
*a = *b;
 *b = tmp;
}
int main()
{
 int a =10;
 int b = 20;
 printf("****** values before swap function are: ****** \n");
 printf("a: %d \n",a);
 printf("b: %d \n",b);
 ft_swap(&a, &b);
 printf("***** values after swap function are: ***** \n");
 printf("a: %d \n",a);
 printf("b: %d \n",b);
}