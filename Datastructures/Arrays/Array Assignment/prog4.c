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
        printf("\n %d. ",i+1);
        scanf("%d",&a[i]);
    }
}

void insertAtEnd(int a[],int noOfElements){
    int num;

    printf("\nEnter the element to be inserted: ");
    scanf("%d",&num);

    for(int i=0;i<noOfElements+1;i++){
        if(a[i]==0 && a[i+1]==0 ){
            a[i]=num;
            
        }
    }


}



int main(){

    void printArray();
    void insertInArray();
    void insertAtEnd();
   

    int a[10]={},noOfElements;
    

    insertInArray(a,&noOfElements);

    printArray(a,noOfElements);

    insertAtEnd(a,noOfElements);

    printArray(a,noOfElements+1);



    return 0;

}