#include <stdio.h>
#include "ft_printf.h"
/*int main()
{
    int value = 27;
    //char text = "Nikolas Goulios";
    
    ft_printf("Value: %d, Text: %s\n", value, "Nikolas Goulios");
    printf("Value: %d, Text: %s\n", value, "Nikolas Goulios");
    
    return (0);
}*/

/*int main()
{
    ft_printf("%c%c%c", 'a', '\t', 'b');
    return 0;
}*/

#include <stdio.h> // For debugging

int ft_putchar(char c)
{
    printf("Printing character: '%c' (ASCII: %d)\n", c, (int)c); // Debug print
    if (write(1, &c, 1) == -1)
        return (-1);
    return (1);
}
