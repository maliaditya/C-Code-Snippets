#include <stdio.h>

int main(){

    int a[5]={1,2,3,4,5};

    int index,number;

    for(int i=0;i<5;i++){
        printf("%d ", a[i]);
    }

    printf("\nEnter the position of number you would like to insert number into: ");
    scanf("%d",&index);

    printf("\nEnter the  number you would like to insert: ");
    scanf("%d",&number);

    a[index] =number;


    for(int i=0;i<5;i++){
        printf("%d ", a[i]);
    }



    

    
}