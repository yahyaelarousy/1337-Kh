char *ft_strncpy(char *dest, char *src, unsigned int n)
{
     unsigned int i = 0 ;
    while(src[i] != '\0' && i < n)
    {
        dest[i]=src[i];
        i++;
    }
while (i < n)
{
    dest[i] = '\0';
    i++;
}
return dest;

    
}
#include<stdio.h>
int main()
{
    unsigned int i ;
    char *src="hcd";
    char dest[500];
     ft_strncpy(dest,src,100);
    printf("%s",dest);
}