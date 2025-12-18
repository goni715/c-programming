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
    // for(int i=0; i < 10; i++){
    //     printf("%c\n", myName[i]);
    // }

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

    //concatenate
    char firstName[15] = "Osman";
    char lastName[] = "Goni";

    strcat(firstName, lastName);
    printf("%s\n", firstName); //output= OsmanGoni

    //copy string
    char str1[20] = "Goni Hales";
    char str2[20];

    strcpy(str2, str1);
    printf("%s\n", str2);

    //compare string
    char value1[20]= "Osman";
    char value2[20]= "Usman";
    char value3[20]= "Osman";

    int result1 = strcmp(value1, value2); //return= -1 (These are not equal)
    int result2 = strcmp(value1, value3); //return= 0 (These are equal)
    printf("%d\n", result1);
    printf("%d", result2);

    return 0;
}