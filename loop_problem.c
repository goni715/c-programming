#include <stdio.h>

int main()
{
    int N; // input=4
    scanf("%d", &N);

    // for(int i=1; i <= 4; i++){
    //     printf("%d", i);
    //     for(int j=1; j <=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (int i = N; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // output
    // ****
    // ***
    // **
    // *

    int N; // input=4
    for (int i = 1; i <= N; i++)
    {
        // Print spaces
        for (int j = 1; j <= N - i; j++)
            printf(" ");

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        // Move to next line
        printf("\n");
    }

    for (int i = N; i >= 1; i--)
    {
        for (int s = 1; s <= N - i; s++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
