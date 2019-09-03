#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int i;
    // User Input limited from 0-9
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 9);
    //Loop for Pyramid
    for (i = 0; i <= n; i++)
    {
        //Loop for Spacing
        for (size_t k = n; k > i; k--)
        {
            printf(" ");
        }
        //Loop for hashes
        for (size_t j = 0; j<= i; ++j)
        {
            printf("#");
        }
        printf("\n");
    }
}

