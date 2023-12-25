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
	if(str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++; 
	}
	return(sign * res);
}

int is_prime(int num)
{
	int i = 2;
	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if(num % i == 0)
			return (0);
		i++;
	}
	return (1);
}


void print_nbr(int n)
{
	char c;

	if(n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	
	else
	{
		print_nbr( n / 10);
		print_nbr(n % 10);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int sum = 0;
		int n = ft_atoi(av[1]);
		while (n > 0)
		{
			if (is_prime(n))
				sum = sum + n;
			n--;
		}
		print_nbr(sum);
	}
	write(1, "\n", 1);
}

