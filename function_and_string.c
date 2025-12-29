#include <stdio.h>
#include <string.h>

void fun(char arr[]){
    printf("%d", strlen(arr));
}

//as pointer
void fun2(char * arr){ 
    printf("%d", strlen(arr));
}

int main(){
    char arr[20] = "Hello";
    fun(arr);
    printf("\n");
    fun2(arr);
}