#include <stdio.h>

void main(){


    long nc;

    nc =0;
    while(getchar() != 0){

        ++nc;
        printf("Count = %ld\n", nc);
    }
}