#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strdup(char *src)
{
	char* ptr;
	int i;
	int len = 0;

	while(src[len] != '\0')
		len++;

	ptr = malloc(sizeof(char) * (len + 1));
	
	if(ptr == NULL)
		return (NULL);
	i= 0;
	while (src[i])
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
	return (ptr);
		
}
int main()
{
	char *s = "hello 1337";
	printf("%s\n",ft_strdup(s));
	printf("%s\n",strdup(s));
}