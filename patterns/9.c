#include <stdio.h>
 
int main () {

   int i,a,c;
   int b = 65;
	
   for( i = 1; i < 6; i++ ){
               c=i;

       printf("\n");
       for(a=1;a<6;a++){
           if(a<6-i){
               printf(" ");
           }else{
               printf("%c",b);
           }
       }
       b = b +1;
   }
   return 0;
}