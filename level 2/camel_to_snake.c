#include <unistd.h>


//  the function part


// void camel_2_snake(char *str)
// {
// 	int i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= 65 && str[i] <= 90)
// 		{
// 			str[i] = str[i] + 32;
// 			write(1, "_", 1);
// 		}
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }
// int main()
// {
// 	char s[] = "hereIsACamelCaseWord";
// 	camel_2_snake(s);
// }


// the program part

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i] !='\0')
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
			{
				av[1][i] = av[1][i] + 32;
				write(1, "_", 1);
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1,"\n", 1);
	
}