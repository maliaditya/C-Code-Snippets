#include <stdio.h>

void printarray(int a[]){
    printf("The elements in the array are: ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}

void insertInArray(int a[]){
    printf("Enter the elements in an array.");
    
    for(int i=0;i<5;i++){
        printf("\n %d. ",i+1);
        scanf("%d",&a[i]);
    }
}



int main(){

    void printarray();
    void insertInArray();
    int a[10]={};

    insertInArray(a);

    printarray(a);

    

    return 0;

}