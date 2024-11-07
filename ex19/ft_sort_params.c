#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while(s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
    {
        i++;
    }
    return(s1[i] - s2[i]);
}

void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

int main(int ac, char **av)
{
    
}