#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s, const char *charset)
{
	int i = 0;
	int j;
	if(!s || !charset)
		return (0);

	while (s[i])
	{
		j = 0;
		while (charset[j])
		{
			if(s[i] == charset[j])
				return (char *)s;
			j++;
		}
		i++;		
	}
	return (0);
}
int main()
{
	char s[] = "aaaa123";
	char set[] = "welcomehel";
	printf("%s\n", ft_strpbrk(s,set));
	printf("%s\n", strpbrk(s,set));
}