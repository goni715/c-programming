#include <stdio.h>

void fun(int arr[], int len, int i){
    //Base Case
    if(len==i) return;

    printf("%d\n", arr[i]);
    fun(arr, len, i+1);
}

// int main(){
//     int arr[] = {10, 20, 30};
//     fun(arr, 3, 0);

//     return 0;
// }


// using input value
int main(){
    int len;
    scanf("%d", &len);
    int arr[len];

    for(int i=0; i < len; i++){
        scanf("%d", &arr[i]);
    }

    fun(arr, len, 0);
}


/*input=
5
10 20 30 40 50
*/

/*output=
10
20
30
40
50
*/
