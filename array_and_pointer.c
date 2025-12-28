#include <stdio.h>

int main(){
    int arr[5] = { 10, 20, 30, 40, 50 };
    //printf("address of 0th index= %p", &arr[0]); //000000000061FE00
    //printf("\n");
    //printf("address of arr= %p", &arr); //000000000061FE00

    //2nd reason
    // printf("value of 0th index= %d", arr[0]); //10
    // printf("\n");
    // printf("value of 0 index by pointer= %d", *arr); //10

    printf("value of 1st index= %d", arr[1]); //10
    printf("\n");
    printf("value of 1st index by pointer= %d", *(arr+1)); //20
    printf("\n");
    printf("value of 2nd index by pointer= %d", *(arr+2)); //30

   // arr[1] ---> *(arr+1) //20
   // *(arr+1) ---> arr[1] //20
   // 1[arr] ---> *(1+arr) //20
   //arr[1] er mane asole *(arr+1) er direference value neya
}