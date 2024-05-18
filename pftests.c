#include <stdio.h>
#include "ft_printf.h"
int main(void)
{
    int value = 27;
    //char text = "Nikolas Goulios";
    
    ft_printf("Value: %d, Text: %s\n", value, "Nikolas Goulios");
    printf("Value: %d, Text: %s\n", value, "Nikolas Goulios");
    
    return (0);
}