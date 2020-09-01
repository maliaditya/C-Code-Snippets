#include <stdio.h>
 
int main () {

   int sum =4,i,a;
	
   for( i = 1; i < 5; i++ ){
      printf("\n");
      for(a=1;a<5;a++){
          if(a>i){
          printf(" ");
          } else{
              printf("%d ",sum);
                sum = sum -1;
              
          }
      }
      sum = sum+1;
   }
 
   return 0;
}