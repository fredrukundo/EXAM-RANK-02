#include <unistd.h>

// int	ft_isspace(char c)
// {
// 	if(c == 32 || (c >= 9 && c <= 13))
// 		return (1);
// 	return (0);
// }
// void last_word(char *s)
// {
// 	int i = 0;
// 	while (s[i])
// 		i++;
// 	i--;
// 	while(ft_isspace(s[i]))
// 		i--;
// 	while(s[i] && !ft_isspace(s[i]))
// 		i--;
// 	i++;
// 	while (s[i] && !ft_isspace(s[i]))
// 	{
// 		write(1, &s[i], 1);
// 		i++;
// 	}
// }
// int main()
// {
// 	char s[] = "hello world";
// 	last_word(s);
// }
int	ft_isspace(char c)
{
	if(c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}
int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while(av[1][i])
			i++;
		i--;
		while(ft_isspace(av[1][i]))
			i--;
		while(av[1][i] && !ft_isspace(av[1][i]))
			i--;
		i++;
		while(av[1][i] && !ft_isspace(av[1][i]))
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	
}