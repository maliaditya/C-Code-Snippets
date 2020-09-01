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

void deleteSpecific(int a[],int noOfElements){
    int loc;

    printf("\nEnter the location of the element to be deleted: ");
    scanf("%d",&loc);
  

    for(int i=loc;i<noOfElements;i++){
        a[i]=a[i+1];

    }
}



int main(){

    void printArray();
    void insertInArray();
    void deleteSpecific();
    
   

    int a[10]={},noOfElements;
    

    insertInArray(a,&noOfElements);

    printArray(a,noOfElements);

    deleteSpecific(a,noOfElements);


    printArray(a,noOfElements);



    return 0;

}