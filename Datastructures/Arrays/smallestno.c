#include <stdio.h>

int main(){

    int a[5]={23,12,34,30,5};
    int smallestnumber = 0,position;

    for(int i=0;i<5;i++){
        if(smallestnumber == 0){
            smallestnumber = a[i];
        } else if(smallestnumber > a[i]){
            smallestnumber = a[i];
            position = i;
        }
        
    }

    printf("\nThe smallest number is %d ",smallestnumber);
    printf("\nThe position of smallest number is %d ",position);



    
}