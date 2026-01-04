#include <stdio.h>

void fun(int arr[], int len, int i){
    //Base Case
    if(len==i) return;
    
    printf("%d\n", arr[i]);
    fun(arr, len, i+1);
}

int main(){
    int arr[] = {10, 20, 30};
    fun(arr, 3, 0);

    return 0;
}

