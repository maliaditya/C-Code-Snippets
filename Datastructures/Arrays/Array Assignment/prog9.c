#include <stdio.h>

void printArray(int a[],int noOfElements){
    printf("\nThe elements in the array are: ");
    for(int i=0;i<noOfElements;i++){
        printf("%d ",a[i]);
    }
}

void insertInArray(int a[],int* noOfElements){
    
    printf("\nEnter no of elements to be inserted in an array.");
    scanf("%d",&*noOfElements);
    for(int i=0;i<*noOfElements;i++){
        printf("\n arr[%d] =  ",i);
        scanf("%d",&a[i]);
    }
}

void deleteAtStart(int a[],int noOfElements){

    for(int i=0;i<noOfElements+1;i++){
        
        a[i] = a[i+1];
    }
}



int main(){

    void printArray();
    void insertInArray();
    void deleteAtStart();
    
   

    int a[10]={},noOfElements;
    

    insertInArray(a,&noOfElements);

    printArray(a,noOfElements);

    deleteAtStart(a,noOfElements);


    printArray(a,noOfElements);



    return 0;

}