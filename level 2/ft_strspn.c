#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, char c)
{
	int i = 0;
	while (s[i])
	{
		if(s[i] == c)
			return ((char *)s);
		i++;
	}
	return (0);
}
ssize_t ft_strspn(const char *s, const char *accept)
{
	ssize_t i = 0;
	while (s[i])
	{
		if(ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return (i);
}
int main()
{
	const char *str1 = "abecde123";
	const char *str2 = "abc";
	printf("%zu\n", ft_strspn(str1,str2));
	printf("%zu\n", strspn(str1,str2));
}