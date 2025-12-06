#include <stdio.h>

int main(){
    int age;
    age=25;
    char roll = 'G';
    float weight = 10.5;
    printf("%d", age);

    printf("%c", roll);
    
    printf("%d %c %f", age,roll,weight);
    printf("%d %c %0.2f", age,roll,weight);
    return 0;
}