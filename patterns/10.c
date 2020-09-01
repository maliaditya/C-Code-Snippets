#include <stdio.h>
 
int main () {

   int i,a,c =69;
   int b = 65;
	
   for( i = 1; i < 6; i++ ){
       printf("\n");
       for(a=1;a<8;a++){
         
        printf(" %c ",b); //A,B,C

        if (b <= c)
            b = b +1;
        else
            b = b-1;
            c = c-1;

       }
        b = 65;
        c = 69;

   }
   return 0;
}