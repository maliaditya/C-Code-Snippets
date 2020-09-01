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

void insertAtStart(int a[],int noOfElements){
    int num;
    printf("Enter the element to be inserted.");
    scanf("%d",&num);

    for(int i=noOfElements;i>=0;i--){
        if(i==0){
            a[i] = num;
        }else{
        a[i]=a[i-1];
        }
    }

}



int main(){

    void printArray();
    void insertInArray();
    void insertAtStart();
   

    int a[10]={},noOfElements;
    

    insertInArray(a,&noOfElements);

    printArray(a,noOfElements);

    insertAtStart(a,noOfElements);

    printArray(a,noOfElements+1);



    return 0;

}