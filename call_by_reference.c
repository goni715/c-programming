#include <stdio.h>

void fun(int *ptr){
    printf("value of x: %d\n", *ptr); //output=10
    *ptr=50;
}

int main(){
    int x = 10;
    fun(&x);
    printf("%d", x); //output=50
    return 0;
}