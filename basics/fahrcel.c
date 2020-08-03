#include <stdio.h>

void main(){

    float fahr, celcius;
    float upper,lower,step;

    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;
    printf("Fahrenhiet to celcius conversion\n");
    while(fahr <= upper){
        
        celcius = 5*(fahr-32)/9;
        printf( "%3.0f  %6.0f \n"  , fahr,celcius);
        fahr = fahr +step;

    }
}

// output

// 0        -17 
// 20       -6 
// 40       4 
// 60       15 
// 80       26 
// 100      37 
// 120      48 
// 140      60 
// 160      71 
// 180      82 
// 200      93 
// 220      104 
// 240      115 
// 260      126 
// 280      137 
// 300      148 