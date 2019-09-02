#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int i;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 9);
    
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("        ");
        }
        if (i == 1)
        {
            printf("       ");
        }
        if (i == 2)
        {
            printf("      ");
        }
        if (i == 3)
        {
            printf("     ");
        }
        if (i == 4)
        {
            printf("    ");
        }
        if (i == 5)
        {
            printf("   ");
        }
        if (i == 6)
        {
            printf("  ");
        }
        if (i == 7)
        {
            printf(" ");
        }
        for (size_t j = 0; j<= i; ++j)
        {
            printf("#");
        }
        printf(" ");
        printf("\n");
    }
}

