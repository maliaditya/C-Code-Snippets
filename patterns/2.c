#include <stdio.h>
 
int main () {

   int t=2,l=1,i,a,mul;
	
   for( i = 1; i < 5; i++ ){
      printf("\n");
      for(a=1;a<5;a++){
          mul = t*l;
          if(a>i){
          printf(" ");
          } else{
              
              printf("%d ",mul);
              l=l+1;
              
          }
      }
      
   }
 
   return 0;
}