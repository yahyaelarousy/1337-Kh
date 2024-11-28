#include<stdio.h>
void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main ()
{

    int a = 5 ;
    int b = 3;
    ft_swap(&a,&b);
    printf("a = %d \n ", a);
    printf("b = %d \n ", b);
}