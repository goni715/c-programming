#include <stdio.h>
#include <string.h>

int main(){
    char myName[] = "Osman Goni";
    printf("My name is: %s\n", &myName);

    printf("Fist letter of name is: %c\n", myName[0]);

    //modify string
    myName[0]='U';
    printf("New name is: %s\n", myName);

    //loop through a string
    for(int i=0; i < 10; i++){
        printf("%c\n", myName[i]);
    }

    //loop using the dynamic length
    int length = sizeof(myName) / sizeof(myName[0]);
    printf("myName string length is: %d\n", length);


    //string with input value
    // char a[5];
    //  for(int i=0; i<5; i++){
    //     scanf("%c", &a[i]);
    //  }

    //  for(int i=0; i<5; i++){
    //     printf("%c\n", a[i]);
    //  }


     //count
     //char numbers[100];  //input=GoniHales
     //scanf("%s", numbers);
     //int count=0;

     //count until null = \0
    //  for(int i=0; numbers[i] != '\0'; i++){
    //     count++;
    //  }

    //  printf("%d\n", count); //output=9

    //while loop
    // int x=0;
    // while (numbers[x] != '\0')
    // {
    //     count++;
    //     x++;
    // }
    //printf("%d\n", count); //output=9
    

    //string functions
    char address[] = "Saidpur, Nilphamari";
    printf("%zu\n", strlen(address));
    printf("%zu\n", sizeof(address));

    return 0;
}