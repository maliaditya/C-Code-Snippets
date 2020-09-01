#include <stdio.h>

int main(){

    int x=10;
    int *ptr;

    ptr = &x;

    *ptr + 40;

    printf("%i ",x);
}
