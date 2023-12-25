#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
		sign = -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}
void print_hex(int n)
{
	char digits[] = "0123456789abcdef";
	if(n >= 16)
		print_hex(n / 16);
	write(1, &digits[n % 16], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = ft_atoi(av[1]);

		print_hex(n);
	}
	write(1, "\n", 1);
	
}