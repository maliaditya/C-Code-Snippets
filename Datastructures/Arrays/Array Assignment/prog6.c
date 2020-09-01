#include <stdio.h>

void printArray(int a[],int noOfElements){
    printf("The elements in the array are: ");
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

void insertInMiddle(int a[],int noOfElements){
    int num;
    printf("\nEnter the element to be inserted at the middle of the array: ");
    scanf("%d",&num);

    int mid = noOfElements/2;

    for(int i=noOfElements;i>=mid;i--){
        if(i == mid){
            a[i+1] = a[i];
            a[i]=num;
        }else{
        a[i+1] = a[i];
        }

    }
}



int main(){

    void printArray();
    void insertInArray();
    void insertInMiddle();
    
   

    int a[10]={},noOfElements;
    

    insertInArray(a,&noOfElements);

    printArray(a,noOfElements);

    insertInMiddle(a,noOfElements);


    printArray(a,noOfElements+1);



    return 0;

}