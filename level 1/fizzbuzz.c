#include <stdio.h>
#include <unistd.h>

// function

void ft_putchar(char c)
{
 write(1, &c, 1);
}
void ft_putstr(char *s)
{
 int i;

 i = 0;
 while (s[i] != '\0')
 {
  write(1, &s[i], 1);
  i++;
 }
 
}
void simple_putnbr(int n)
{
 if (n > 9)
 {
  simple_putnbr(n / 10);
  simple_putnbr(n % 10);
 }
 else
  ft_putchar(n + '0');
}
void ft_fizzbuzz()
{
	int i;

	i = 0;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			ft_putstr("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			ft_putstr("fizz");
		}
		else if (i % 5 == 0)
		{
			ft_putstr("buzz");
		}
		else
			simple_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	
}
int main()
{
 ft_fizzbuzz();
}