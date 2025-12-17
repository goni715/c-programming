#include <stdio.h>
#include <string.h>

int main (){
    // char a[18];
    // gets(a);

    // printf("%s", a);

    char a[100];
    fgets(a, 10, stdin); //Evan AhmedEvan
    a[10]='\0';
    printf("%s", a); //output = Evan Ahme 
    return 0;
}
