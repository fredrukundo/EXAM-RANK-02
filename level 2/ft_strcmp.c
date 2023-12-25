#include <unistd.h>
#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main()
{
	char s1[] = "NULL";
	char s2[] = "NULL";
	printf("%d\n", ft_strcmp(s1,s2));
	printf("%d\n", strcmp(s1,s2));
}