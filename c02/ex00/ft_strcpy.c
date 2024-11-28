char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i]=src[i];
        i++;
        }
        dest[i]='\0';
    return (dest);
    }
 #include<stdio.h>
 int main()
 {
    char src[]="hello";
    char dest[]="";
    ft_strcpy(dest,src);
    printf("%s\n",dest);
 }   