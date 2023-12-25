#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int ac, char **av)
{
	int i = 0;
	if (ac == 4 && !av[2][1] && !av[3][1])
	{
		while (av[1][i] !='\0')
		{
			if (av[1][i] == av[2][0])
			{
				av[1][i] = av[3][0];
			}
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}