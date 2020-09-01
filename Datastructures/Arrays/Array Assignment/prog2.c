#include <stdio.h>

void printArray(int a[]){
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

void smallestNumber(int a[],int* smallestNo,int* positionOfSmallestNo){
    *smallestNo = a[0];

    for(int i=1;i<5;i++){
        

        if(*smallestNo>a[i]){
            *smallestNo = a[i];
            *positionOfSmallestNo = i;
        }
    }

    
}

void largestNumber(int a[],int* largestNo,int* positionOfLargestNo){

   *largestNo = a[0];

    for(int i=1;i<5;i++){
        

        if(*largestNo<a[i]){
            *largestNo = a[i];
            *positionOfLargestNo = i;
        }
    }

    
}



int main(){

    void printArray();
    void insertInArray();
    void smallestNumber();
    void largestNumber();
    int a[10]={},largestNo,smallestNo,positionOfLargestNo,positionOfSmallestNo;

    insertInArray(a);

    printArray(a);

    smallestNumber(a, &smallestNo, &positionOfSmallestNo);
    largestNumber(a, &largestNo, &positionOfLargestNo);
    printf("\n%d is the smallest number & %d is its position in an Array.",smallestNo,positionOfSmallestNo);
    printf("\n%d is the largest number & %d is its position in an Array.",largestNo,positionOfLargestNo);


    return 0;

}