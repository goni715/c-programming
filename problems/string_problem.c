#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s) {
    int len = strlen(s);
    int i = len - 1;
    int count = 0;

    printf("%d", len);
    printf("\n");

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count characters of the last word
    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}


int main(){
    char s[] = " Hello World ";
    int result = lengthOfLastWord(s);
    printf("%d", result);
}