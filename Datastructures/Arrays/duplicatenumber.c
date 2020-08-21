#include <stdio.h>

int main(){

    int array[5] = {0,2,3,4,2}, count=0;
    
    
    for(int i =0; i<5;i++){

        for(int j=i;j<5;j++){

            if(array[i] == array[j]){
                count += 1;
                if( count == 2)
                printf("%d id the duplicate value ",array[i]);
            }
        }
    }



}