#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    
    // User Input Storage and Prompt
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    
    // Loop for Pyramids
    for (size_t i = 0; i <= n; i++)
    {
        // Spaces for Right Pyramid
        for (size_t j = n; j > i; j--)
        {
            printf(" ");
            
        }
        
        //Hash for Right
        for (size_t l = 0; l < i; l++)
        {
            printf("#");
        }
        printf("  ");
        
        //Left Pyramid
        for (size_t k = 0; k < i; k++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    
}
