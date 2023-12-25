#include <unistd.h>

// void ft_epur_str(char *s)
// {
// 	int i = 0;
// 	int flag = 0;
// 	while(s[i] == ' ' || s[i] == '\t')
// 		i++;
// 	while (s[i])
// 	{
// 		if(s[i] == ' ' || s[i] == '\t')
// 			flag = 1;
// 		if (!(s[i] == ' ' || s[i] == '\t'))
// 		{
// 			if(flag)
// 				write(1, " ", 1);
// 			flag = 0;
// 			write(1, &s[i], 1);
// 		}
// 		i++;
// 	}
	
// }
// int main()
// {
// 	char v[] = " this        time it      will     be    more complex  . ";
// 	ft_epur_str(v);
// }

int main(int ac, char **av)
{
	int i;
	int flag;
	if (ac == 2)
	{
		i = 0;
		flag = 0;
		while(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
			i++;
		while (av[1][i])
		{
			if(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
				flag = 1;
			if(!(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13)))
			{
				if(flag)
					write(1, " ", 1);
				flag = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}