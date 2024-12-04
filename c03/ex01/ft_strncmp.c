int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0; 
    while(s1[i] != '\0' && i < n)
    {
        if (s1[i] != s2[i])
        {
        return s1[i] - s2 [i];
        }
        i++;
        
    }
}
#include<stdio.h>
int main(void)
{
    unsigned int n = 2;
    char s1[]= "yahya";
    char s2[]= "yahya";
    printf("%d",ft_strncmp(s1,s2,n));
    
}