#include <stdio.h>
 
int main () {

   int t=2,l=10,i,a,mul;
	
   for( i = 1; i < 5; i++ ){
      printf("\n");
      for(a=1;a<6-i;a++){
          mul = t*l;
          printf("%d ",mul);
            l=l-1;
      }  
   }
 
   return 0;
}