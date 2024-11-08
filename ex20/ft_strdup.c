#include <unistd.h>
#include <stdlib.h>


char *ft_strdup(char *src)
{
    int i;
    i = 0;
    int len;
    len = 0;
    char *dup;

    while (src[len] != '\0')
    {
        len++;
    }
    dup = (char *)malloc(sizeof(char) * (len + 1));
    if (!dup)
    {
        return(NULL);
    }
    while (i < len)
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);
}


// #include <string.h>
// #include <stdio.h>

// void ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void ft_putstr(char *str)
// {
//     int i;
//     i = 0;
//     while(str[i] != '\0')
//     {
//         ft_putchar(str[i]);
//         i++;
//     }
// }

// int main(void)
// {
//     char *src = "Hello test";
//     char *dup = ft_strdup(src);
//     if (dup == NULL)
//     {
//         ft_putstr("error!\n");
//         return (1);
//     }
//     ft_putstr("og: ");
//     ft_putstr(src);
//     ft_putchar('\n');
//     ft_putstr("copie: ");
//     ft_putstr(dup);
//     ft_putchar('\n');
//     return (0);
// }
