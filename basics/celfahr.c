#include <stdio.h>

void main(){

    float celcius, fahr;
    float upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;
    
    celcius = lower;
    while(celcius <= upper){

        fahr = celcius * 5/9 +32;
        printf("%f /t %f \n", celcius, fahr);
        celcius = step;
    }
}