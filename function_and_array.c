#include <stdio.h>

void func(int arr[], int n){
    
    for(int i=0; i<n; i++){
        //printf("%d\n", *(arr+i));
        printf("%d\n", arr[i]);
    }
}

void func2(int * arr, int n){  //array as pointer
    for(int i=0; i<n; i++){
        //printf("%d\n", *(arr+i));
        printf("%d\n", arr[i]);
    }
}


// change array value as pointer
void func3(int *ar, int n){
    ar[0]=500;
}


int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    //func(ar, 5);
    ///func2(ar, 5);
    func3(ar, 5);
    for(int i=0; i < 5; i++){
       printf("%d ", ar[i]); //500 20 30 40 50
    }
    return 0;
}