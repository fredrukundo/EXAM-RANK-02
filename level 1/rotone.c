#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int rotone(char c)
{
	if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
		c += 1;
	else if (c == 'z' || c == 'Z')
		c -= 25;
	
	return (c);
}
int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			ft_putchar(rotone(av[1][i]));
			i++;
		}
		
	}
	ft_putchar('\n');
}
