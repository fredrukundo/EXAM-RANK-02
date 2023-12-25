#include <stdio.h>
#include <unistd.h>

// the function


// void rev_print(char *s)
// {
// 	int i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	while (i >= 0)
// 	{
// 		write(1, &s[i], 1);
// 		i--;
// 	}
	
// }
// int main()
// {
// 	rev_print("dub0 a POIL");
// }

// the program

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			write(1, &av[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	
}