#include <stdio.h>

void sort_int_tab(int *tab, int size)
{
	int i = 0;
	int temp;
	while (i < (size - 1))
	{
		if(tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
		
	}
	
}

int main()
{
	int tab[] = {7,2,4,1,3,0,5,4};
    int size = 8;
	int i = 0;
    sort_int_tab(tab,size);
	while (i < size)
	{
		printf("tab[%d]= %d \n",i, tab[i]);
		i++;
	}
}