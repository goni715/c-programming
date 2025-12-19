#include <stdio.h>

void calculateSum(int x, int y){
    int sum = x + y;
    printf("%d", sum);
}


void myFunction(char address[]){
    printf("%s", address);
}


void myBioData(char name[], int roll){
    printf("My name is: %s. Roll Number is: %d", name, roll);
}


//array parameter pass
void myArray(int myNumbers[], int length){
    for(int i=0; i < length; i++){
        printf("%d\n", myNumbers[i]);
    }
}


int main(){
    //calculateSum(3, 4);
    //myFunction("Saidpur, Nilphamri");
    //myBioData("Osman Goni", 230);
    int numbers[] = {1, 3, 4, 5, 6, 7};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    myArray(numbers, length);
    return 0;
}

