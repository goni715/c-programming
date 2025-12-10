#include <stdio.h>

int main(){
    double isLoggedIn = 1.5;
    int isAdmin = 0;

    printf("Regula User: %.1lf, %d goni",isLoggedIn,isAdmin);

    int a = 200;
    int b = 33;
    int c = 500;

    if (a > b || a > c) {
      printf("At least one condition is true\n");
    }

    return 0;
}