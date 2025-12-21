#include <stdio.h>

int main(){
    int number = 10;
    int *ptr;
    
    ptr = &number; //ptr stores the address of number

    printf("Value of number: %d\n", number); //output= 10
    printf("Address of number: %p\n", &number); //000000000061FE14

    printf("Value stored in ptr: %p\n", ptr); //output= 000000000061FE14
    printf("Value pointed to by ptr: %d\n", *ptr);//output = 10

    int x = 10;
    printf("%p\n", &x); //000000000061FE08
    int* p = &x;
    printf("%p\n", p); //000000000061FE08

    //dereference
    printf("%d\n", *p); //10
    
    *p=500;

    printf("%d\n", x); //output=500


    return 0;
}