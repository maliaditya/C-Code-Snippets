#include <stdio.h>

int main(){

    int fsapce =4, bspace =4,i,j;

    for(i=0;i<5;i++){
        printf("\n");
        for(j=0;j<9;j++){
            if(j<fsapce || j> bspace){
                printf(" ");
            } else if( j%2 ==0 ){
                printf("%2d ",i*2);
            } else {
                printf("%2d ",i*2);
                
            }
        }
    }
}