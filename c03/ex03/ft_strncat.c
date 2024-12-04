

#include<stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int main ()
{
    char dest[]="hello";
    char src[]="hello";
    ft_strncat(dest,src,2);
    printf("%s",dest);
}