#include <stdio.h>

int main()
{
    int n = 10;

    for (int i = 1; i < n + 1; i++)
    {

        for (int j = 0; j < n - i + 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    
    
    }
    
    for (int i = 0; i < n; i++)
        {
            if(i == 0){
                continue;
            }
            for (int j = 0; j < i + 1; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < 2 * n - 2 * i -1 ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    
    return 0;
}