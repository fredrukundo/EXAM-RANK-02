#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int flag;
	if (ac == 2)
	{
		flag = 0;
		i = 0;
		while(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
			i++;
		while (av[1][i])
		{
			if(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
				flag = 1;
			if(!(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13)))
			{
				if(flag)
					write(1, "   ", 3);
				flag = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}