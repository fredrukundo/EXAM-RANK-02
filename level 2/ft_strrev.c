#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char temp;

	while(str[j])
		j++;
	j = j - 1;
	while (i < ((j + 1) / 2))
	{
		temp = str[i];
		str[i] = str[j - i];
		str[j - i] = temp;
		i++;
	}
	return (str);
}
int main()
{
	char s[] = "123456";
	printf("%s\n", ft_strrev(s));
}