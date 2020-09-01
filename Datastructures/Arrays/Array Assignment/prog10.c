#include <stdio.h>

void printArray(int a[],int noOfElements){
    printf("\nThe elements in the array are: ");
    for(int i=0;i<noOfElements;i++){
        printf("%d ",a[i]);
    }
}

void insertInArray(int a[],int* noOfElements){
    
    printf("Enter no of elements to be inserted in an array.");
    scanf("%d",&*noOfElements);
    for(int i=0;i<*noOfElements;i++){
        printf("\n arr[%d] =  ",i);
        scanf("%d",&a[i]);
    }
}

void deleteInMiddle(int a[],int noOfElements){

    int mid = noOfElements/2;

    for(int i=mid;i<noOfElements;i++){
        a[i]=a[i+1];

    }
}



int main(){

    void printArray();
    void insertInArray();
    void deleteInMiddle();
    
   

    int a[10]={},noOfElements;
    

    insertInArray(a,&noOfElements);

    printArray(a,noOfElements);

    deleteInMiddle(a,noOfElements);


    printArray(a,noOfElements);



    return 0;

}