#include <stdio.h>
#include "ft_printf.h"
int main()
{
    //int value = 27;
    //char text = "Nikolas Goulios";
    
    ft_printf("Value: %d, Text: %s\n", 27, "Nikolas Goulios");
    printf("Value: %d, Text: %s\n", 27, "Nikolas Goulios");
    ft_printf("%x, %X", 42, 42);
    ft_printf("%x, %X", 0, 0);
    ft_printf("%x, %X", 1500, 1500);
    printf("%x, %X", 42, 42);
    printf("%x, %X", 0, 0);
    printf("%x, %X", 1500, 1500);
    ft_printf("%", 1500, 1500);
    
    return (0);
}

/*int main()
{
    ft_printf("%c%c%c", 'a', '\t', 'b');
    return 0;
}*/

/*#include <stdio.h> // For debugging

int ft_putchar(char c)
{
    printf("Printing character: '%c' (ASCII: %d)\n", c, (int)c);
    if (write(1, &c, 1) == -1)
        return (-1);
    return (1);
}*/
