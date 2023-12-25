#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if(n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int ft_atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while (s[1] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if(s[i] == '-')
		sign = -1;
	if(s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * sign);
}

int main(int ac, char **av)
{
	if (ac == 4 )
	{
		if (av[2][0] == '+')
			ft_putnbr((ft_atoi(av[1])) + (ft_atoi(av[3])));

		if (av[2][0] == '*')
			ft_putnbr((ft_atoi(av[1])) * (ft_atoi(av[3])));

		if (av[2][0] == '-')
			ft_putnbr((ft_atoi(av[1])) - (ft_atoi(av[3])));

		if (av[2][0] == '/')
			ft_putnbr((ft_atoi(av[1])) / (ft_atoi(av[3])));
			
		if (av[2][0] == '%')
			ft_putnbr((ft_atoi(av[1])) % (ft_atoi(av[3])));		
	}
	ft_putchar('\n');
}