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

void insertSpecific(int a[],int noOfElements){
    int num,location;
    printf("\nEnter the element to be inserted in the array: ");
    scanf("%d",&num);
        printf("\nEnter the location of the element to be inserted in the array: ");
    scanf("%d",&location);



    for(int i=noOfElements;i>=location;i--){
        if(i == location){
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
    void insertSpecific();
    
   

    int a[10]={},noOfElements;
    

    insertInArray(a,&noOfElements);

    printArray(a,noOfElements);

    insertSpecific(a,noOfElements);


    printArray(a,noOfElements+1);



    return 0;

}