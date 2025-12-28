#include <stdio.h>

int main () {
    int N; //input=4
    scanf("%d", &N);

    // for(int i=1; i <= 4; i++){
    //     printf("%d", i);
    //     for(int j=1; j <=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//output
// ****
// ***
// **
// *