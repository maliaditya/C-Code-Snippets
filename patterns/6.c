#include <stdio.h>
 
int main () {

   int i,a;
	
   for( i = 1; i < 6; i++ ){
      printf("\n");
      for(a=1;a<7-i;a++){
          if(i%2 ==0){
          printf("%d ",i*i*i);
      }
          else{
          printf("%d ",i*i);
          
          }
      }
   }
 
   return 0;
}