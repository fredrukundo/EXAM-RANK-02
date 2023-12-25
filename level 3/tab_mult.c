#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1; 
	int res = 0;

	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
		sign = -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int n)
{
	if(n < 0)
	{
		write(1, "-", 1);
		n = -1;
	}
	if(n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 1;
		int n = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
		
	} 
	write(1, "\n", 1);
}