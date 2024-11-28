int ft_str_is_printable(char *str)
{
    int i = 0; 
    while (str[i] != '\0')
    {
        if(str[i] >= 32 && str[i] <= 126)
        return 1;
        i++;
    }
    return 0;
    }
    #include<stdio.h>
    int main ()
    {
     char str[] = "é";
     printf("%d", ft_str_is_printable(str));
    }
    