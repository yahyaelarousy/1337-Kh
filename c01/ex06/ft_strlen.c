#include<stdio.h>
int ft_strlen(char *str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
    

}
int main ()
{
    int i;
  char str[]="p";
  i = ft_strlen(str);
  printf("%d",i);
}