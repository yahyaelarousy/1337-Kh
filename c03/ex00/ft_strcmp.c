#include <stdio.h>
int	ft_strcmp(char *s1,char *s2)
{
	int i = 0;
	while(s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
#include<stdio.h>
int main ()
{
    char s1[]= "heldlo";
    char s2[]= "hello";
    printf("%d",ft_strcmp(s1,s2));
}