#include <stdio.h>

void world(){
    printf("World Started\n");
    printf("World End\n");
}

void hello(){
    printf("Hello Start\n");
    world();
    printf("Hello End\n");
}

int main(){
    printf("Main Start\n");
    hello();
    printf("Main End \n");
}

// output= Main Start
// Hello Start  
// World Started
// World End    
// Hello End    
// Main End 