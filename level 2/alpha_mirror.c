#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int mirror_letter(char c)
{
	if (c >= 97 && c <= 122)
		c = 122 - c + 97;
	else if(c >= 65 && c <= 90)
		c = 90 - c + 65;
	return (c);
}
int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			ft_putchar(mirror_letter(av[1][i]));
			i++;
		}
		
	}
	ft_putchar('\n');
}