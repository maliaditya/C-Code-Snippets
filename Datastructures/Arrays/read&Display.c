#include <stdio.h>

int main(){

    int arr[10] = {};

    for(int i=0;i<10;i++){
        printf("\n arr[%d] = ",i);
        scanf("%d",&arr[i]);

    }

    printf("The elements in the array are.");


    for(int i=0;i<10;i++){

        printf("%d ",arr[i]);
    }
}