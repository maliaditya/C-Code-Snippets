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

void secondLargestNumber(int a[],int positionOfLargestNo,int* secondLargestNo){
    *secondLargestNo = a[0];
    for(int i=1;i<5;i++){
        if(*secondLargestNo<a[i] && a[i] != a[positionOfLargestNo]){
            *secondLargestNo=a[i];
        }
    }
}

void secondSmallestNumber(int a[],int positionOfSmallestNo,int* secondSmallestNo){
    *secondSmallestNo = a[0];
    for(int i=1;i<5;i++){
        if(*secondSmallestNo > a[i] && a[i] != a[positionOfSmallestNo]){
            *secondSmallestNo = a[i];
        }
    }
}

int main(){

    void printArray();
    void insertInArray();
    void smallestNumber();
    void largestNumber();
    void secondLargestNumber();
    void secondSmallestNumber();

    int a[10]={}, largestNo, smallestNo, positionOfLargestNo, positionOfSmallestNo;
    int secondLargestNo,secondSmallestNo;

    insertInArray(a);
    printArray(a);

    smallestNumber(a, &smallestNo, &positionOfSmallestNo);
    largestNumber(a, &largestNo, &positionOfLargestNo);

    secondLargestNumber(a, positionOfLargestNo, &secondLargestNo);
    secondSmallestNumber(a, positionOfSmallestNo, &secondSmallestNo);
    
    printf("\n%d is the second largest number in an Array.",secondLargestNo);
    printf("\n%d is the second smallest number in an Array.",secondSmallestNo);

    return 0;
}