int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        return 1;
        i++;

    }
    return 0;
    
}
#include<stdio.h>
int main ()
{
    char str[]="1";
    printf("%d\n",ft_str_is_lowercase(str));
}