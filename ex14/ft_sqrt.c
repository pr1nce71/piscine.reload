#include <unistd.h>

int ft_sqrt(int nb)
{
    int i;

    i = 1;
    if (nb <= 0)
        return(0);
    while(i * i <= nb)
    {
        if(i * i == nb)
        {
            return (i);
        }
        i++;
    }
    return(0);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("sqrt %d\n", ft_sqrt(-2282));
// 	printf("sqrt %d\n", ft_sqrt(0));
// 	printf("sqrt %d\n", ft_sqrt(16));
// 	printf("sqrt %d\n", ft_sqrt(9));
//     printf("sqrt %d\n", ft_sqrt(144));
//     return (0);
// }