#include <stdio.h>

int main (){

    //post increment
    int num1 = 0;
    printf("start value= %d\n", num1);//output=0
    printf("Post-increment= %d \n", num1++); //output=0
    printf("After Increment= %d \n",num1);//output =1
    //নোট: post icrement এ কাজ আগে হয়(এখানে print এর কাজ), পরে inrement হয়।

    
    //pre increment
    int num2 = 0;
    printf("start value= %d\n", num2);//output=0
    printf("Pre-increment= %d\n", ++num2);//output=1
    //নোট: pre icrement এ আগে inrement হয়, পরে কাজ হয়(এখানে print এর কাজ)।

    return 0;
}