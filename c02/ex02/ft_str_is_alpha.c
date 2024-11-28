int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        return 1;
        else return 0;
        
        i++;
        }
    
}
#include<stdio.h>
int main ()
{
    char str[]="PP";
    printf("%d",ft_str_is_alpha(str));

}