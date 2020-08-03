#include <stdio.h>
 
int main () {

   int i,a,c;
	
   for( i = 1; i < 6; i++ ){
               c=i;

       printf("\n");
       for(a=1;a<6;a++){
           if(a<6-i){
               printf(" ");
           }else{
               printf("%d",c);
               c = c-1;
           }
       }
   }
   return 0;
}