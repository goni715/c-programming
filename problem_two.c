#include <stdio.h>
#include <string.h>

int main(){
    char a[20];

    scanf("%s", a); //input = Osman Gon/ia

    for(int i=0; i < strlen(a); i++){
        if(a[i] == '/'){
            break;
        }

        printf("%c\n", a[i]);
    }

    return 0;
}