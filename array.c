#include <stdio.h>

int main(){
    int myNumbers[] = { 1, 2, 3, 4, 5};
    printf("%d\n", myNumbers[2]);

    //change value
    myNumbers[1]=10;
    printf("%d\n", myNumbers[1]);

    int incomes[] = { 20, 30, 40, 50, 60 };
    int sum;
    int i;

    int length = sizeof(incomes)/ sizeof(incomes[0]);

    for(i = 0; i < length; i++){
        sum= sum+incomes[i];
    }

    printf("Total: %d", sum);

    return 0;
}