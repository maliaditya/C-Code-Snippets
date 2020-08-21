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

void deleteAtEnd(int a[],int noOfElements){

    for(int i=0;i<noOfElements+1;i++){
        if(a[i]==0 && a[i+1]==0 ){
            a[i-1]=0;
            
        }
    }
}



int main(){

    void printArray();
    void insertInArray();
    void deleteAtEnd();
    
   

    int a[10]={},noOfElements;
    

    insertInArray(a,&noOfElements);

    printArray(a,noOfElements);

    deleteAtEnd(a,noOfElements);


    printArray(a,noOfElements);



    return 0;

}