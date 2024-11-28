#include<stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
    int  div;
    int  mod ;
    div = *a,
    mod = *b;
    *a = div / mod;
    *b = div % mod ;
}
int main ()
{
    int a = 15 ; 
    int b = 10 ;
    ft_ultimate_div_mod(&a,&b);
    printf(" a = %d\n",a);
    printf(" b = %d\n",b);
}