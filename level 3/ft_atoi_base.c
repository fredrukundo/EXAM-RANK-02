#include <unistd.h>
#include <stdio.h>

int is_space(char c)
{
	if(c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int isvalid(char c, int base)
{
	char digits[] = "0123456789abcdef";
	char digits2[] = "0123456789ABCDEF";

	while (base--)
		if(digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int value_of(char c)
{
	if(c >= '0' && c <= '9')
		return (c - '0');
	else if(c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if(c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}
int ft_atoi_base(char *str, int str_base)
{
	int res = 0;
	int sign = 1;
	while(is_space(*str))
		str++;
	if(*str == '-')
		sign = -1;
	if(*str == '-' || *str == '+')
		str++;
	while (isvalid(*str, str_base))
		res = res * str_base + value_of(*str++);
	return (res * sign);
	
}

int main()
{
	char s[] = "01239";
	int base = 4;
	printf("%d", ft_atoi_base(s, base));
}