#include <stdio.h>

void fun(int x){
    x=300;
    printf("x value in function= %d", x);//output=300
    printf("\n");
}

int main () {
    int x = 20;
    fun(x);
    printf("Value of x in main=%d", x);//output=20

    //note: address of both are different
    return 0;
}