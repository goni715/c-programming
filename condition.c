#include <stdio.h>

int main(){
    // int age=25;
    // int roll=230;

    // printf("My age is %d. %d is my college roll", age, roll);

    // if(20 > 18){
    //   printf("20 is greater than 18");
    // }

    // int x = 20;
    // int y = 18;
    // if(x > y){
    //     printf("x is greater than y\n");
    // }

    // int time = 20;
    // if (time < 18) {
    //   printf("Good day.");
    // } else {
    //   printf("Good evening.");
    // }


    //if-else-else if
    // int time = 22;
    // if (time < 10) {
    //   printf("Good morning.");
    // } else if (time < 20) {
    //   printf("Good day.");
    // } else {
    //   printf("Good evening.");
    // }


    //short-hand if/else //using ternary operator
    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good evening.");


    int x = 15;
    int y = 25;

   if (x > 10) {
     printf("x is greater than 10\n");

    // Nested if
     if (y > 20) {
      printf("y is also greater than 20\n");
     }  
   } 

   int myNum = 5;

  if (myNum % 2 == 0) {
    printf("%d is even.\n", myNum);
  } else {
    printf("%d is odd.\n", myNum);
  }
   
    return 0;
}