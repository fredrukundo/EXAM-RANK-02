#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *charset)
{
	int i = 0;
	int j = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if(s[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
int main()
{
	char s[] = "hello123";
	char t[] = "123";
	printf("%zu\n", ft_strcspn(s,t));
	printf("%zu\n", strcspn(s,t));
}