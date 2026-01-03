#include <stdio.h>
#include <string.h>

int convertValue(char c){
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        break;
    }
}

int romanToInt(char *s) {
    int total = 0;

    for(int i=0;  s[i] != '\0'; i++){
        int currentValue = convertValue(s[i]);
        int nextValue = convertValue(s[i+1]);
        
        if(currentValue >= nextValue ){
            total +=currentValue;
        }else{
            total -=currentValue;
        }
    }

    return total;
}

int main(){
    char roman[] = "III";
    int total = romanToInt(roman);
    printf("%d", total);
    return 0;
}