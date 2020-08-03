#include <stdio.h>

void main(){

    int c;
    c = getchar();
    printf("%d\n", EOF);
    while(c!=EOF){
        putchar(c);
        c= getchar();
    } 
}