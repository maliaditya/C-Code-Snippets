#include <stdio.h>
 
int main () {

   int i,a;
	
   for( i = 1; i < 6; i++ ){
      printf("\n");
      if(i%2 != 0){
      for(a=1;a<5;a++){
          if(a>i){
          printf(" ");
          } else{

              printf("/ \\");
              
          }
      }
   }
   }
   return 0;
}