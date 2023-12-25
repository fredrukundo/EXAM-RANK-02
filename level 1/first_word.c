#include <stdio.h>
#include <unistd.h>

// function

// char *ft_first_word(char *str)
// {
//  int i;
//  i = 0;
//  while (str[i] == 32 || str[i] == 9)
//   i++;
//  while ((str[i] != 32 && str[i] != 9) && str[i])
//  {
//   write(1, &str[i], 1);
//   i++;
//  }
//  return (str);
// }
// int main()
// {
//  ft_first_word("  lorem,ipsum  ");
// }


// program
int main(int ac, char **av)
{
 int i;

 i = 0;
 if (ac == 2)
 {
	while (av[1][i] == 32 || av[1][i] == 9)
		i++;
	while (av[1][i] != 32 && av[1][i] != 9 && av[1][i])
	{
		write(1, &av[1][i], 1);
		i++;
	}
 }
 write(1, "\n", 1);
 
}