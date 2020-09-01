#include <stdio.h>

void main(){

    int fahr = 0;

    for( fahr = 0 ; fahr <=300 ; fahr = fahr+20){

        printf("%d \t %f \n" , fahr , (5.0/9.0) * fahr-32);
    }
}