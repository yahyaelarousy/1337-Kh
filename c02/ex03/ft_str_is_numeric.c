int ft_str_is_numeric(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9') 
        {
            return 1 ;
            i++;
            }
            return 0;
        
    }
    
}
#include<stdio.h>
int main ()
{
    char str[] = "4dd4d";
    printf("%d",ft_str_is_numeric(str));
}