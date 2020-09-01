#include <stdio.h>
 
int main () {

   int l=10,i,a;
	
   for( i = 1; i < 5; i++ ){
      printf("\n");
      for(a=1;a<6-i;a++){
          printf("%d ",l);
            l=l-1;
      }  
   }
 
   return 0;
}