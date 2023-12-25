#include <stdio.h>
#include <unistd.h>

int count_letter(char c)
{
 int count;

 count = 0;
 if (c >= 97 && c <= 122)
 {
  count += c - 97 + 1;
 }
 else if (c >= 65 && c <= 90)
 {
  count += c - 65 + 1;
 }
 else
  count = 1;
 return (count);
}
void repeat_alpha(char *s)
{
 int i;
 int repeat;
 i = 0;
 while (s[i] != '\0')
 {
  repeat = count_letter(s[i]);
  while (repeat > 0)
  {
   write(1, &s[i], 1);
   repeat--;
  }
  i++;
 }
 
}
// int main(int ac, char **av)
// {
// int repeat;
// int i;

// i = 0;
// if (ac == 2)
// {
// while (av[1][i] != '\0')
// {
//  repeat = count_letter(av[1][i]);
//  while (repeat > 0)
//  {
//   write(1, &av[1][i], 1);
//   repeat--;
//  }
//  i++;
// }
// }
// write(1, "\n", 1);
// }
int main()
{
    repeat_alpha("abc");
}
