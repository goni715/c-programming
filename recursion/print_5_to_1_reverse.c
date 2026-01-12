#include <stdio.h>

void fun(int i){
    if(i==6) return; //Base Case
    fun(i+1);
    printf("%d\n", i);
}

int main(){
    fun(1);
    return 0;
}


/*Call sequence
fun(1)
 └─ fun(2)
     └─ fun(3)
         └─ fun(4)
             └─ fun(5)
                 └─ fun(6) → return
            
এখন return হওয়ার সময় print হবে:
i = 5
i = 4
i = 3
i = 2
i = 1

5
4
3
2
1
*/
